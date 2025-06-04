#include<iostream>


template<typename T, typename U> 
class my_is_same {
public:
    static constexpr bool value = false;
};

template<typename T>
class my_is_same<T,T> {
public:
    static constexpr bool value  = true;
};

int main() {
    static_assert(my_is_same<int, int>::value == true, "int == int");
    static_assert(my_is_same<int, float>::value == false, "int != float");
    static_assert(my_is_same<int, const int>::value == false, "int != const int");
}