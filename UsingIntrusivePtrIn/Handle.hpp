#pragma once 
#include <UsingIntrusivePtrIn/platform/intrusive_ptr.hpp>

namespace UsingIntrusivePtrIn {

    template<class T>
    using Handle = boost::intrusive_ptr<T>;
}
