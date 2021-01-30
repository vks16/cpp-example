# Lambda
Lambda is just like working with function pointers, but instead of defining a function and then getting their address.
Lambda is just a throwaway function.

We can have a function that takes an argument of function pointer. We can pass a lambda there of that type.
Lambda is an anonymous function

```
[](int value) { std::cout << value << std::endl; }
```
