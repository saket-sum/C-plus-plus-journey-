#include<iostream>
using namespace std;

int main(){
   
   int n,t=2;
   cout<<"ENTER HOW BIG YOU NEED YOUR BUTTERFLY PREFERRED (1-20) :- ";
   cin>>n;
   for(int i=0;i<n;i++){
      
      for(int j=0;j<i+1;j++){
         cout<<"*";
      }
      
      if(i!=n-1){
         for(int j=0;j<2*(n-i-1);j++){
           cout<<" ";
         }
      } 
      
      t=0;
      for(int j=0;j<i+1;j++){
         cout<<"*";
      }
      cout<<endl;
   }
    
   for(int i=0;i<n;i++){
      
      for(int j=0;j<n-i;j++){
         cout<<"*";
      }
      
      if(i!=0){
         for(int j=0;j<2*i;j++){
            cout<<" ";
         }
      }
      for(int j=0;j<n-i;j++){
         cout<<"*";
      }
      cout<<endl;   
   }      
}
  
