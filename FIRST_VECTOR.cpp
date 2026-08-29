#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_min(vector<int> a){
    int maxm,minm,t;
    maxm=*max_element(a.begin(),a.end());
    minm=*min_element(a.begin(),a.end());
    cout<<"MAXIMUM ELEMENT IS :- "<<maxm<<endl;
    cout<<"MINIMUM ELEMENT IS :- "<<minm<<endl;
    cout<<"press 1 to reverse 0 to stop :- ";
    cin>>t;
    if(t==1){
        for(int i=a.size()-1;i>=0;i--){
        cout<<"ELEMENT "<<i+1<< " IS :- "<<a[i]<<endl;
        }
    }
    else if(t==0){
        return 0;
    }
    else{
        cout<<"INVALID INPUT :(";
    }
    return 0;
}

int main(){
    vector<int> a;
    int b,t;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT IN THE VECTOR :- ";
    cin>>b;
    for(int i=0;i<b;i++){
        cout<<"ENTER YOUR NUMBER "<<i+1<<" :- ";
        cin>>t;
        a.push_back(t);
    }
    max_min(a);
}
