#include<iostream>


template<typename T>
class my_is_array {
public:
    static constexpr bool value = false;
};

template<typename T, size_t N>
class my_is_array<T[N]> {
public:
    static constexpr bool value = true;
};



int main() {
    static_assert(my_is_array<int>::value == false, "int is not an array");
    static_assert(my_is_array<int[5]>::value == true, "int[5] is an array");
    static_assert(my_is_array<int[]>::value == false, "this true");
}