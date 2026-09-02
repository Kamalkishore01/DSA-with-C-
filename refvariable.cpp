#include<iostream>
using namespace std;
/*
int main(){

    // Referce var--> A refernce variable acts as an alias or alternative name for an existing variable,
    // Same memory locn different names 
    int a=5;
    //ref var
    int &temp=a;
    cout<<temp<<endl;//5
    cout<<a<<endl;//5

    temp=temp*10;   // a, temp= 50
    cout<<a<<endl;
}


// Pass by VALUE::   ::  ::    ::     :::    ::
void solve(int a){
    cout<<"Inside the fxn: "<<a<<endl;  // it copy the value of a but has their own different address
    a++;
    cout<<"Inside fxn a++: "<<a<<endl; //6
}
int main(){
    int a=5;
    cout<<"Inside main Fxn:"<<a<<endl;
    solve(a);
    cout<<"Inside main:"<<a<<endl; // here it print the main fxn value mean print 5 not 6.
}
*/
//Pass by refernce    ::  ::    ::     :::    ::
// in this same memory locn but diffrent names, it does not copy the value. Use & sign. DIrect memory access

void show(string &b){
    cout<<"Inside the fxn: "<<b<<endl;//a=9
    b[0]='A';           //a++
    cout<<"Inside the fxn: "<<b<<endl;  //10

}
int main(){
    string a="Raman";  //a=9
    cout<<"inside the main fxn: "<<a<<endl;
    show(a);
    cout<<"After came from fxn calling, again in main fxn: "<<a<<endl;// Unlike pass by value it print the orginial main fxn value, pass by refr print the computated val in calling fxn. because does not copy. 
            //a=10
}
