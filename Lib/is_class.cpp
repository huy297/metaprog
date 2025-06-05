template<typename T>
struct my_is_class {
private:
    template<typename U>
    static char test(int U::*);

    template<typename U>
    static int test(...);

public:
    static constexpr bool value = sizeof(test<T>(0)) == sizeof(char);
};

static_assert(my_is_class<int>::value == false);

class forTesting {};

static_assert(my_is_class<forTesting>::value);