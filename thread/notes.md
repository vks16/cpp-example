# Thread
To use thread 
```
#include <thread>

std::thread worker(DoWork);
```
Create an object of type std::thread and pass an function pointer or lambda to execute on that thread.

To wait for the thread to join the main thread

```
worker.join(); // this will halt code. like await in javascript async functions
```


## std::this_thread
It is used to access current thread

```
using namespace std::literals::chrono_literals;

std::this_thread::sleep_for(1s);

std::this_thread::get_id();
```