#include<iostream>
using namespace std;

void maxSmin(int a[]){
    int M=INT_MIN,m=INT_MAX,Max=0,Min=0;
    for(int i=0;i<=6;i++){
        if(a[i]>M){
            M=a[i];
            Max=i;
        }
    }
    for(int i=0;i<=6;i++){
        if(a[i]<m){
            m=a[i];
            Min=i;
        }
    }
    cout<<"VALUE SWAPPED "<<a[Max]<<" & "<< a[Min]<<endl;   
    swap(a[Min],a[Max]); 

}

int main(){
    int a[7];
    for(int i=0;i<=6;i++){
        cout<<"ENTER YOUR NUMBER "<<i+1<<" :- ";
        cin>>a[i];
    }
    maxSmin(a);
    for(int i=0;i<=6;i++){
        cout<<a[i]<<endl;
    }
}