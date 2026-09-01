//BINARY
#include<iostream>
using namespace std;
int binsearch(int arr[], int size, int element){
    //int low,mid,high;
    int mid;
    int low=0;
    int high= size-1;

    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }

        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }return -1;
}

int main(){
    int arr[100]={12,13,15,16,18,22,26};
    int size=7;
    int element=18;
    int searched= binsearch(arr,size,element);
    cout<<"Element "<<element<<"Found at index:"<< searched;
    return 0;
}