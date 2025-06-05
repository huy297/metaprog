#include <iostream>

template<typename T>
struct my_remove_reference {
    using type = T;
};

template<typename T>
struct my_remove_reference<T&> {
    using type = T;
};

template<typename T>
struct my_remove_reference<T&&> {
    using type = T;
};

template<typename T>
using my_remove_reference_t = typename my_remove_reference<T>::type;

int main() {
    my_remove_reference_t<int&> x = 10;
}