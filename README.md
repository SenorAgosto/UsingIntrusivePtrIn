# UsingIntrusivePtrIn 

This is a header only convenince library wrapping boost::intrusive_ptr into a mixin class. The mixin provides the ability to set the reference count type using a policy. There is also a policy to provide debugging hooks. 

    // Using the mixin, reference count type 
    // defaults to std::atomic<std::size_t>
    class MyType : public UsingIntrusivePtrIn<MyType>
    {
    public:
        // ... snip ... 
    };

    // create an intrusive pointer to MyType.
    MyType::smartptr t = new MyType();

## Dependencies 

Uses boost/intrusive_ptr.hpp, assumes boost/ is in your include path.

## Maintainer 

Austin Gilbert  <ceretullis@gmail.com>

## License

4-Clause BSD License, see LICENSE.md for details. Other licensing available on request.
