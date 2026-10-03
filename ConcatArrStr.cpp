#include<iostream>
using namespace std;
//2. Concatination of aan Array:    :::       ::::::::::::::
int getlenght(char arr[]){//dont take size here
                int count =0;
                int index=0;
                while (arr[index] !='\0'){
                    count++;
                    index++;
                }
                return count;
    }
int concatArr(char a[], char b[]){
        int aindex=getlenght(a);
        int bindex= 0;
        while(b[bindex]!='\0'){
            //Start copying:
            a[aindex]=b[bindex];
            aindex++;
            bindex++; 
           
        }
            //end a string with null char;
            a[aindex]='\0';
}
int main(){
    char a[90]="Love";
    char b[23]="You";
    concatArr(a,b);
    cout<<"Concatintation of arr: "<< a<<endl;
}