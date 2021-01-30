# Function Pointer
Functions are also stored in memory just like any variable. So, we can get there address and store it as well.

```
void printFunc(){
	//...
}

// the above function has a address &printFunc and type void(*)()

void(*func)() a = &printFunc;

// now we can call func() and it will work like printFunc()
// we also don't need &printFunc as well, we can directly use printFunc, as it automatically gets the address.
```
