#include<iostream>
using namespace std;

int main(){
   /*n=4->  i=0.1.2...n-1,j- n times, if i=0 or n ***..n  else j=0 or n *
   */
  int i=0,j=0,n;
  cout<<"ENTER VALUE OF n :- ";
  cin>>n;
  for(i=0;i<n;i++){
   for(j=0;j<n;j++){
      if(i==0 || i==n-1){
         cout<<"*";
      }
      else if(j==0 || j==n-1){
         cout<<"*";
      }
      else{
         cout<<" ";
      }
   }
   cout<<endl;
  }
   }
  
