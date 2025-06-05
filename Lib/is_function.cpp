template<typename T>
struct my_is_function {
    static constexpr bool value = false;
};

template<typename Ret, typename... Args>
struct my_is_function<Ret(Args...)> {
    static constexpr bool value = true;
};

template<typename Ret, typename... Args>
struct my_is_function<Ret(Args...) noexcept> {
    static constexpr bool value = true;
};


static_assert(my_is_function<void(int)>::value);           
static_assert(my_is_function<int>::value == false);        
static_assert(my_is_function<void() noexcept>::value);    
static_assert(!my_is_function<double(double)>::value == false); 