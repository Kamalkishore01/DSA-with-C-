//Traverse an array and then insertion of element in Array
#include<iostream>
using namespace std;



void printarr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
// INSERT AN ARRAYS ELEMENT::  ::   ::  ""  :::
int  insertarr(int arr[], int size, int index, int element,int capacity){
                if(size>=capacity){
                    return -1;
                }
            for(int i=size-1;i>=index;i--){
                arr[i+1]=arr[i];
            }    
            arr[index]=element;
            return 1;
}

int main(){
    int arr[100]={7,8,12,27,88};
    int size=5;
    int index=3;
    int element=15;
    printarr(arr,5);
    int capacity =100;

    size=size+1;// In insertion of an element the array size also inc.
    insertarr(arr,size,index, element, capacity);
    cout<<endl;
    cout<<"After insertion"<<endl;

    printarr(arr,size);

}


//2.  TRAVERSE and DELETION an array::  ::   ::  :::::    ::

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int inddel(int arr[],int size, int index, int capacity){
    if(size>=capacity){
        cout<<"Out of bound";
        return -1;
    }
    for(int i=index; i<size-1;i++){
        arr[i]=arr[i+1];// agle element nu pichle index ch shift krdo
    }
    return 1;
}

int main(){
    int arr[100]={12,13,19,15,16};
    int size=5;
    int capacity=100;
    int index=3;
    printarr(arr, size);
   
    inddel(arr,size,index,capacity);
     size-=1;
    cout<<endl;
    printarr(arr,size);
    return 0;
}








//2.SWAP An Alternate Arrays elements;

void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void alternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }}

int main(){
    int arr[40]={23,32,31,34,43,21};
    int odd[5]={12,45,13,14,16};
    int size=6;
    printarr(arr,size);
    cout<<endl;
    alternate(arr,size);
        printarr(arr,size);
        cout<<endl;
    alternate(odd,5);
        printarr(odd,5);    
}    





//Q2: Find unique elements in array 'M' number elemt present twice in array and a single unique element there to print

int unique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[90]={12,15,12,15,8};
    int size=5;
     //printarr(arr,size);   
    cout<<"Unique element: "<<unique(arr,size);

}



//Find duplicate element 

int duplicate(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        // Using XOR ing all element
        ans=ans^arr[i];
    }
    //XOR ing last elemt
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[90]={1,2,3,4,3};
    int size=5;
    cout<<duplicate(arr,size);
}