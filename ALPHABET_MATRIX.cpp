#include<iostream>
using namespace std;

int main(){

  char ch='A';
  int a,i=0,j=0;

  cout<<"ENTER YOUR LIMIT :- ";
  cin>>a;

  for(i=0;i<a;i++){
   
     for(j=0;j<a;j++){
         cout<<(char)(ch+j)<<" ";
      }   
      cout<<endl;
   }
}