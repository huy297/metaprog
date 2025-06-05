#include <iostream>

// base case
template<typename T>
constexpr T sum(T single) {
    return single;
}


template<typename T, typename... Args>
constexpr T sum(T first, Args... rest) {
    return first + sum(rest...);
}


int main() {
    std::cout << sum(1, 2, 3, 4) << '\n';         
    std::cout << sum(2.5, 3.5) << '\n';           
    constexpr auto total = sum(1, 1, 1, 1, 1);    
    static_assert(total == 5, "Sum is wrong");
}