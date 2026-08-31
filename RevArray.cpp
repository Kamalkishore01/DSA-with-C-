#include<iostream>
using namespace std;
//       Reverse an ARRAY::  ::  ::  ::  ::  ::  ::

void reversearr(int arr[], int size){ 
    // Print original array
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Reversing:  
    int i=0;
    int j=size-1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    cout<<"Reversed array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    reversearr(arr, size);
    
}