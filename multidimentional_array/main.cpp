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

    // now to delete these memory, we can't just use delete[] a2d; because it will just delete top 50 pointers and leave the 2nd dimension which contains the actual value

    for(int i = 0; i < 50 ; i++)
    {
        delete[] a2d[i];
    }
    delete[] a2d;

    for(int x=0; x<50; x++)
    {
        for(int y=0; y<50; y++)
        {
            delete[] a3d[x][y];
        }
        delete[] a3d[x];
    }
    delete[] a3d;


    // making 2d array with 1d array
    int* arr = new int[5 * 5];
    for(int y = 0; y<5; y++)
    {
        for(int x = 0; x < 5; x++)
        {
            arr[x + y * 5] = 2;
        }
    }

    delete[] arr;
    return 0;
}