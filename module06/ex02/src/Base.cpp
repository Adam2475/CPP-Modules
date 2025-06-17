#include "../inc/Base.hpp"

// dynamic_cast and RTTI require a complete vtable, 
// which only exists if the virtual destructor is 
// both declared and defined.


// Declaring virtual ~Base(); without defining it causes a 
// linker error because the compiler generates RTTI info that 
// needs the actual function body.

Base::~Base() {}