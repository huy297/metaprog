#include <iostream>

template<typename T>
class my_is_reference {
public:
    static constexpr bool value = false;
};

template<typename T>
class my_is_reference<T&> {
public:
    static constexpr bool value = true;
};

template<typename T>
class my_is_reference<T&&> {
public:
    static constexpr bool value = true;
};

int main() {
    static_assert(my_is_reference<int>::value == false);
    static_assert(my_is_reference<int&>::value == true);
    static_assert(my_is_reference<int&&>::value == true);
}