#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>


int main()
{
    std::vector<int> values = {1,5,0,3,2,1};
    // std::sort(values.begin(), values.end());
    // std::sort(values.begin(), values.end(), std::greater<int>());
    std::sort(values.begin(), values.end(), [](int a, int b) 
    {
        // if returns true, then a will come first
        // if return is false, then b will come first
        if(a == 1)
            return true;
        return a > b;
    });

    for(int val: values){
        std::cout << val << std::endl;
    }

    std::cin.get();

    return 0;
}