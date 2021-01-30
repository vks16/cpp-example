# Lambda
Lambda is just like working with function pointers, but instead of defining a function and then getting their address.
Lambda is just a throwaway function.

We can have a function that takes an argument of function pointer. We can pass a lambda there of that type.
Lambda is an anonymous function

```
[](int value) { std::cout << value << std::endl; }
```

void(*)() is just a raw function pointer from C.

But in C++, we have std::function

```
#include <functional>

void forEach(const std::vector<int>& values, const std::function<void(int)>& func)
{

}
```

Now we can pass lambda with [] captures to forEach 2nd argument.

In [] capture, we can pass outside variable by reference or value to the lambda to be used.

```
int a = 5;
auto lambda = [=](int value) { std::cout << value << std::endl;};
```