#pragma once

#include <UsingIntrusivePtrIn/details/CacheLinePad.hpp>

#include <atomic>
#include <cstddef>

namespace UsingIntrusivePtrIn { namespace details {
  
    // multi-threaded base class for use in <UsingIntrusivePtrIn> mixin
    // in which the reference count is forced onto its own cache line.
    struct CacheLinePaddedReferenceCountBase
    {
        CacheLinePaddedReferenceCountBase()
            : referenceCount_(0)
        {
        }
        
        CacheLinePaddedReferenceCountBase(const CacheLinePaddedReferenceCountBase&)
            : referenceCount_(0)
        {
        }
        
        CacheLinePaddedReferenceCountBase(CacheLinePaddedReferenceCountBase&& base)
            : referenceCount_(0)
        {
        }
        
        CacheLinePaddedReferenceCountBase& operator=(const CacheLinePaddedReferenceCountBase&)
        {
            return *this;
        }
        
        CacheLinePaddedReferenceCountBase& operator=(CacheLinePaddedReferenceCountBase&&)
        {
            return *this;
        }
        
        void swap(CacheLinePaddedReferenceCountBase&)
        {
        }
        
        ~CacheLinePaddedReferenceCountBase()
        {
        }
        
        // a cache line of padding before...
        CacheLinePad beforePadding_;

        mutable std::atomic<std::size_t> referenceCount_;

        // a cache line of padding after...
        CacheLinePad afterPadding_;
    };
    
}}