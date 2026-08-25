#include<iostream>
using namespace std;

int search(int a[],int i,int b){
    int t=0;
    for(i==0;i<7;i++){
        if(a[i]==b){
            t++;
            return i;            
        }
    }
    return -1;    
}

int main(){
    int a[7],i=0,b;
    for(i=0;i<=6;i++){
        cout<<"ENTER YOUR NUMBER "<<i+1<<" :- ";
        cin>>a[i];
    }
    i=0;
    cout<<"ENTER THE NUMBER YOU WANNA SEARCH :- ";
    cin>>b;
    cout<<"INDEX OF YOUR NUMBER IS :- "<<search(a,i,b);
}