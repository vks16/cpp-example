#include <iostream>
#include <vector>
#include <algorithm>

void forEach(const std::vector<int>& values, void(*func)(int))
{
	for(int value: values)
	{
		func(value);
	}
}

int main()
{
	std::vector<int> values = {1, 5, 4, 2, 3};

    auto test = std::find_if(values.begin(), values.end(), [](int value) -> bool {return value > 3;});
    // this takes two iterator for start and end and returns an iterator for first value of
	std::cout << *test << std::endl;
	std::cin.get();
}
