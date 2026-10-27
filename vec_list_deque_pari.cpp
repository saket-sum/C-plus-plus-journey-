#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

// VECTOR
/*int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(10);    
    for(int i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<vec[3]<<endl;   // NO ERRORS, ACCESS TO SPECIFIC ELEMENTS ARE POSSIBLE
}*/

//LIST 
/*int main(){
    list<int> l;
    l.push_back(5);
    l.push_back(0);
    l.push_front(1);
    l.push_front(2);
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<l[2]<<endl; //  WILL CAUSE ERROR, NO ASCCESS TO DESIRED ELEMENTS
    return 0;
}*/

//DEQUE
/*int main(){
    deque<int> d;
    d.push_back(4);
    d.push_back(5);
    d.push_front(2);
    d.push_front(10);
    // for(int i: d){
    //     cout<<i<<" ";
    // }
    cout<<d[2]<<endl;//   NO ERRORS, ACCESS TO SPECIFIC ELEMENTS POSSIBLE 
    return 0;
}*/

//PAIR
int main(){
    //PAIR FORMATION 
    pair<string, int> p={"MUKESH", 20};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    //PAIR IN A PAIR
    pair<string,  pair<string, float>> t={"SHIVAM", {"SAKET",5.9}};
    cout<<t.first<<endl;
    cout<<t.second.first<<endl;
    return 0;
}
