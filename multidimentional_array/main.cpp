#include <iostream>

int main()
{
    int* array = new int[50]; // allocating memory for 50 integers

    int** a2d = new int*[50]; // allocating memory for 50 pointers to an integer

    for(int i = 0; i < 50; i++)
    {
        a2d[i] = new int[50];  // allocating memory for storing 50 integers and assigning that pointer to a2d[i]
    }

    // 3d array
    int*** a3d = new int**[50];
    for(int x=0; x < 50; x++)
    {
        a3d[x] = new int*[50];
        for(int y = 0; y < 50; y++)
        {
            a3d[x][y] = new int[50];
        }
    }

    return 0;
}