#include<iostream>
using namespace std;

int main(){
   int a[]={-1,0,3,5,9,12},target;
   int str=0 , n=size(a) , end=n-1;
   cout<<"ENTER YOUR NUMBER :- ";
   cin>>target;
   while(str<=end){
      int avg=str+(end-str)/2;
      if(a[avg]<target){
         str=avg+1;
      }
      else if(a[avg]>target){
         end=avg-1;
      }
      else{
         cout<<avg;
         break;
      }
   }
   return -1;
}