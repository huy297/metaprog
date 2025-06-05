
template<typename T>
struct my_add_pointer {
    using type = T;
};

template<typename T>
struct my_add_pointer<T&> {
    using type = T;
};

template<typename T>
struct my_add_pointer<T&&> {
    using type = T;
};

template<typename T>
using my_add_pointer_t = typename my_add_pointer<T>::type*;

int main() {
    static_assert(std::is_same<my_add_pointer_t<int>, int*>::value);

}