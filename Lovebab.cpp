//ARRAY DATA STRUCTURE::

#include<iostream>
using namespace std;


//Array using fxn:

void printArray(int arr[], int size){
    //Traverse an array
    for(int i=0; i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
}
/*
void multipleof10(int num[], int sizes){
    //Table of 10;
    int count=1;
    for(int i=0;i<=9;i++){
        num[i]=10*count;
        count++;
        cout<<num[i]<<" ";
    }
}

int main(){
    /*int size=5;
    int arr[]={56,58,53,59,51};/*

    int sizes=10;
    int num[10];
    //Calling a fxn
    
    //printArray(arr, size);
    multipleof10(num,sizes);
    return 0;
}
*/
/*
 //Flip from 0 to 1 and 1 to 0:

void flipzeroone(int arr[], int size){
        for(int i=0; i<size;i++){
            if(arr[i]==1){
                arr[i]=0;
            }
            else{
                arr[i]=1;
            }
           // cout<<arr[i]<<" ";
        }
}

int main(){
    int arr[]={1,0,1,1,0};
    int size=5;

    cout<<"before: "<<endl;
    printArray(arr,size);
    

    flipzeroone(arr, size);
    cout<<endl;
    cout<<"after: "<<endl;
    printArray(arr,size);
}*/

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