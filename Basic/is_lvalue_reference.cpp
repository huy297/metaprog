#include <iostream>

template<typename T> 
struct is_lvalue_reference {
    static constexpr bool value = false;
};

template<typename T>
struct is_lvalue_reference<T&> {
    static constexpr bool value = true;
};

int main() {
    
}