# UsingIntrusivePtrIn 

This is a header only convenience library wrapping boost::intrusive_ptr into a mixin class. 

The mixin prevents you from having to write `intrusive_ptr_add_ref()` and `intrusive_ptr_release()` over and over again.

    // Using the mixin, reference count type 
    // defaults to std::atomic<std::size_t>
    class MyType : public UsingIntrusivePtrIn<MyType>
    {
    public:
        using smartptr = UsingIntrusivePtrIn::Handle<MyType>;
        
        // ... snip ... 
    };

    // create an intrusive pointer to MyType.
    MyType::smartptr t = new MyType();

The mixin also provides the ability to set the reference count type using a policy. There is also a policy to provide debugging hooks. 

## Dependencies 

Uses boost/intrusive_ptr.hpp, assumes boost/ is in your include path.

## Maintainer 

Austin Gilbert  <ceretullis@gmail.com>

## License

4-Clause BSD License, see LICENSE.md for details. Other licensing available on request.

## References 

[Peter Weinert, "A Base Class for Intrusively Reference-Counted Objects in C++".](http://www.drdobbs.com/cpp/a-base-class-for-intrusively-reference-c/229218807)

