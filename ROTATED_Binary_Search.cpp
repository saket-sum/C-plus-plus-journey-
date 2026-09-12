#include<iostream>
using namespace std;

int main(){
   int a[]={3,4,5,6,7,0,1,2},n=size(a),str=0,end=n-1,target;//YOU CAN USE THIS ONE AS WELL {6,7,0,1,2,3,4,5}
   cout<<"ENTER YORU TARGET :- ";
   cin>>target;
   while(str<=end){
      int mid=str+(end-str)/2;
      if(a[mid]==target) cout<<mid;
         
      if(a[mid]>a[str]){
         if(a[str]<=target && target<=a[mid]){
            end=mid-1;
         }
         else{
            str=mid+1;
         }
      }
      else{
         if(a[mid]<=target && target<=a[end]){
            str=mid+1;
         }
         else{
            end=mid-1;
         }
      }
   }
   return -1;
}