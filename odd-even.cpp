#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"ENTER YOUR NUMBER :- ";
    cin>> num;
    
    if(num%2==0){
        cout<<"ENTERED NUMBER IS EVEN";
    }
    else{
        cout<<"ENTERED NUMBER IS ODD";
    }
    return 0;   
}