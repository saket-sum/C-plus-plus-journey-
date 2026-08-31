#include<iostream>
using namespace std;

int main(){
    int a[]={2,3,6,7,11,15},i=0,j=sizeof(a)/sizeof(int)-1,n=sizeof(a)/sizeof(int);
    while(i<j){
        if(a[i]+a[j]>9){
            j--;
        }
        else if(a[i]+a[j]<9){
            i++;
        }
        else{
            cout<<a[i]<<" "<<a[j];
            i++;
            cout<<endl;
        }  
    }
}