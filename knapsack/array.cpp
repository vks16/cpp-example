#include <iostream>
using namespace std; 

void printarr(int*, int);
//Function for reversing the array contents
void revarr(int* arr,int n){
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 

    printarr(arr, n);
}


//Function to print an array
void printarr(int* arr,int n){// There's some confusion in calling the array I initially didn't use [ ] with array and it was still working!!!!
    for (int i=0; i<n ; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;  
}


int main(){
    int n; 
    cout<<"Enter the size of the array: "; 
    cin>> n; 

    int arr[n]; 
    cout<<"Enter the elements of the array: "; 
    for(int i=0 ; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Array before reversing : " ; 
      printarr(arr, n);// Although I have used call by reference in declaring this function, this code was working without using '&' to pass the array

    

    cout<<"Array after reversing : " ;	
    revarr(arr, n);
        
    

    
    return 0;

}