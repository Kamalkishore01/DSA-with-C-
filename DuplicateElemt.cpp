#include<iostream>
using namespace std;
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