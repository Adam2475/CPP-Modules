#include "../inc/Serializer.hpp"

// reinterpret_cast: unilike "static_cast" it don't compile to any cpu instructions
//                  it is a compile-time directive that says the compiler to treat
//                  the expression as it has <target> type

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}