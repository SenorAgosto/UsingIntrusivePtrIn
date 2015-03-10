#pragma once 

namespace UsingIntrusivePtrIn { namespace details {

    // Cache line size is typically 128 bytes.
    enum { CacheLineSize = 128 };

    template<int CacheLineSize>
    class CacheLinePadImpl {

        char dummy_[CacheLineSize];
    };

    typedef CacheLinePadImpl<CacheLineSize> CacheLinePad;
}}
