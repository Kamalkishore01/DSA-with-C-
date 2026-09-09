#include<iostream>
using namespace std;

/*/
//Declaration
char arr[0];
cout<<arr[3];//print any random val

//Intilisation
char arr[10]="Bablu";
cout<<arr[2]<<endl; //print b
cout<<arr[4]<<endl; //print null character at end of string (0)*/

//1.  Count no of character:::::: ::      ::      ::      ;: 
int getlenght(char arr[]){//dont take size here
                int count =0;
                int index=0;
                while (arr[index] !='\0'){
                    count++;
                    index++;
                   

                }return count
                ;}

int main(){
    char arr[]="babarr";
    cout<<getlenght(arr)<<endl;
}






//4::::::Comparsion of an array            ;;;:::         ;:::::        ;;;;;;:::::::    ::::

int getlenght(char arr[]){//dont take size here
                int count =0;
                int index=0;
                while (arr[index] !='\0'){
                    count++;
                    index++;
                }
                return count;
    }
bool comprArr(char a[], char b[]){
    int aindex=0;
    int bindex=0;
    int alength=getlenght(a);
    while(aindex<=alength){
        if(a[aindex]!= b[bindex]){
            return false;
        }
    else{
        aindex++;
        bindex++;
    }
}
return true;
}
int main(){
    char arr[]= "loveer";
    char brr[]= "love";
    cout<<comprArr(arr,brr);

}