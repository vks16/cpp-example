#include <iostream>
#include <vector>

void print(int arg){
	std::cout << arg << std::endl;
}

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

	forEach(values, print), 
	std::cin.get();
}
