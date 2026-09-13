#include<iostream>
using namespace std;

int main(){
    int a[]={0,1,2,3,5,8,10,6,5,1},str=0,end=size(a)-1;

    while(str<=end){
        int mid=str+(end-str)/2;
        if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
            cout<<mid;
            return 0;
        }
        if(a[mid-1]<a[mid]){
            str=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
 