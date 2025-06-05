
template<typename T, typename U>
struct my_is_same {
    static constexpr bool value = false;
};

template<typename T>
struct my_is_same<T,T> {
    static constexpr bool value = true;
};

// static_assert(my_is_same<int, int>::value, "int is same");
// static_assert(my_is_same<int, void>::value == false, "int and void are diff");

