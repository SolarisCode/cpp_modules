#ifndef ITERATION
# define ITERATION

template <typename T>
void iter(T const *arr, int len, void(*callback)(T const & item))
{
    for(int i = 0; i < len; i++)
        callback(arr[i]);
}

void print_item(std::string const & item)
{
    std::cout << item << "\n";
}

void say_hello(std::string const & str)
{
    std::cout << "Say Hello" << str << "\n";
}

#endif