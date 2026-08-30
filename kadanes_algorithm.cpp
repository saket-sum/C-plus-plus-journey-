#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[5],maxSum=INT_MIN;
    for(int i=0;i<5;i++){
        cout<<"ENTER YOUR NUMBER "<<i+1<<" :- ";
        cin>>a[i];
    }
    for(int str=0;str<5;str++){
        for(int end=str;end<5;end++){
            for(int i=str;i<=end;i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
}