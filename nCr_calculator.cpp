#include<iostream>
using namespace std;

int nCr(int N,int R){
    int a=1,x=1,y=1,z=1;
    if(N>=R){
       while(a<=N){
           x*=a;
           a++;
        } 
        a=1;
       while(a<=R){
           y*=a;
           a++;
        }
        a=1;
        while(a<=(N-R)){
           z*=a;
           a++;
        }
        return x/(y*z);
       }
       else{
        cout<<"invalid input XXXXX";
       }
}
      

int main(){
    int N,R;
    cout<<"ENTER YOUR N :- ";
    cin>>N;   
    cout<<"ENTER YOUR R :- ";
    cin>>R; 
    cout<<N<<"C"<<R<<"="<<nCr(N,R);
}