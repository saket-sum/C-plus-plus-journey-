#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int odd_even(vector<int> a){
    vector<int> odd, even;
    for(int i:a){
        if(i%2==0){     
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }
    cout<<"ODD VECTOR :- "<<endl;
    for(int i:odd){
        cout<<i<<endl;
    }
    cout<<"EVEN VECTOR :- "<<endl;
    for(int i:even){
        cout<<i<<endl;
    }
    return 0;
}

int main(){
   vector<int> a;
   int b,t;
   cout<<"ENTER THE AMOUNT OF NUMBERS YOU WANT IN THE VECTOR :- ";
   cin>>b;
   for(int i=0;i<b;i++){
    cout<<"ENTER NUMBER "<<i+1<<" :- ";
    cin>>t;
    a.push_back(t);
   } 
   odd_even(a);
}