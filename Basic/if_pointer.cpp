#include<iostream>
#include<type_traits>

template<typename T>
typename std::enable_if<std::is_pointer<T>::value, void>::type


