#include<iostream>
using namespace std;

int main(){
    int age;

    cout<<"ENTER YOUR AGE :- ";
    cin>>age;
    if(age==1){
        cout<< "AN INFANT" ;
    }
    else if(age>1 && age<=3){
        cout << "A TODDLER" ;
    }
    else if(age>3 & age <=12){
        cout<< "A CHILD";    
    }
    else if(age>13 && age<=19){
        cout<< "A TEENAGER";
    }
    else if(age>=20 && age<=59){
        cout<< "AN ADULT" ;
    }
    else{
        cout<<"A SENIOR CITIZEN";
    }
    return 0;
}