#include<iostream>
using namespace std;

int main(){
   float a;
   int b=1;
   cout<< "ENTER YOUR TABLE NUMBER :- ";
   cin>> a; 
   for(int b=1;b<=10;b++){
    cout<< a <<"*"<<b<<"="<<a*b<<endl;     
   }
   return 0;   
}