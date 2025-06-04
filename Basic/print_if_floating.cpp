#include <iostream>
#include <type_traits>

template<typename T>
typename std::enable_if<std::is_floating_point<T>::value, void>::type
print_if_floating(T value) {
    std::cout << value << std::endl;
}

int main() {
    print_if_floating(3.14);      
    print_if_floating(42.0f);    
    //print_if_floating(123);       
    //print_if_floating("abc");     

    return 0;
}