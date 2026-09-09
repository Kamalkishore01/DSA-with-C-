#include <iostream>


using namespace std ;

int main(){
    cout<<"Insertion: == 1"<<endl;
    cout<<"deletion: ==2 "<<endl;
    cout<<"linear search: ==3"<<endl;
    cout<<"binary search: ==4"<<endl; 
    cout<<"sortion: ==5"<<endl;
    int programm;
    cout<<"Enter the program name:" ;
    cin >> programm;

   
         int n;
         cout<<"the size of array"<<endl;
         cin>> n;
         int i ;
         int* arr = new int[n];
         for(i=0; i<n ;i++){
             cout<<"enter"<<endl;
             cin>>arr[i];
             cout<<"value"<<endl;
             cout<<arr[i]<<endl;
         
         }
}