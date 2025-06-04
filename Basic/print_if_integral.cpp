#include <iostream>
#include <type_traits>

template<typename T>
void print_if_integral(T value) {
    if constexpr (std::is_integral<T>::value) {
        std::cout << value << '\n';
    } else {
        std::cout << "Not an integral type\n";
    }
}

int main() {
    print_if_integral(42);      
    print_if_integral(3.14);   
}
