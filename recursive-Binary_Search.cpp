#include<iostream>
using namespace std;
// binary search through recursion 

int b_Search(int a[], int target, int str, int end){
    int mid=str+(end-str)/2;
    if(a[mid]==target){
        cout<<mid;
        return 1;
    }

    if(str<=end){
        if(mid<target){
            return b_Search(a,target,mid+1,end);
        }
        else{
            return b_Search(a,target,str,mid-1);
        }
    }
    cout<<"NO VALUES AVAILABLE XXXXX";
    return -1;
}

int main(){
    int a[]={0,1,5,7,10,14,19,22}, n=sizeof(a)/4, target;
    int str=0, end=n-1;
    cout<<"ENTER YOUR TARGET :- ";
    cin>>target;
    b_Search(a,target,str,end);
}