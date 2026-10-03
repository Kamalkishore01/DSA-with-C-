#include<iostream>
using namespace std;
int linsearch(int arr[], int element, int size){
    for(int i=0; i<size; i++){
        if(arr[i]== element){
        
            return i;
        }
    }return -1;
}

int main(){
    int arr[100]={15,65,46,45,6,68,20};
    int size=sizeof(arr)/sizeof(int);// if you dont know or cant count the  size of arry
    int element=15;
    int searched=linsearch(arr,element,size);
    cout<<"Element "<<element<<" was found at: "<<searched;
}