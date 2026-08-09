#include<iostream>
using namespace std;

int main(){
    char alpha;

    cout<<"ENTER YOUR alphabet :- ";
    cin>> alpha;

    if(alpha>=97 && alpha <=122){
        cout<< "lowercase";
    }
    else if(alpha>=65 && alpha <= 90){
        cout<< "uppercase";
    }  
    return 0;   
}