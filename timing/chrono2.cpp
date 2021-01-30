#include <iostream>
#include <chrono>
#include <thread>

class Timer{
public: 
    std::chrono::system_clock::time_point start, end;
    std::chrono::duration<float> duration;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << "Timer took " << ms << "ms " << std::endl;
    }

};

void func() 
{
        Timer timer;
        for(int i = 0; i < 100; i++)
            std::cout << "hi " << std::endl;
}
int main()
{
    func();

    
    std::cin.get();
    return 0;
}