#include<iostream>
#include<vector>
using namespace std;

class parking{
    static vector<int> slot;
    vector<int> *ptr1=&slot;
    bool a=false, b=false;
    private:
        int adh_id;
    public:
        string name;
        int slot_No, cin_time;
        parking(string name, int slot_No, int cin_time, int adh_id){
            this->name=name;
            this->slot_No=slot_No;
            this->cin_time=cin_time;
            this->adh_id=adh_id;
        }
        void printer(){
            for(int i:slot){
                if(slot_No==i){
                    if(cin_time>=9 && cin_time<=17){
                        cout<<"HELLO WELCOME "<<name<<" TO DALLAS WATERPARK"<<endl;
                        cout<<"SLOT ALLOTED "<<i<<endl;
                        a=true;
                        b=true;
                        break;
                    }
                }
            }
            if(a==false){
                cout<<"SLOT NOT ALLOTED"<<endl;
            }
            upgrader();            
        }
        void upgrader(){
            if(a==true && b==true){
                erase(slot, slot_No);
            }
        }
    };
vector<int> parking::slot={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int main(){
    string name;
    int t=1;
    while(t==1){
        int slot_No, cin_time, adh_id;
        cout<<"ENTER YOUR NAME :- ";
        cin>>name;
        cout<<"ENTER YOUR SLOT :- ";
        cin>>slot_No;
        cout<<"ENTER YOUR CHECK IN TIME :- ";
        cin>>cin_time;
        cout<<"ENTER YOUR ADHAAR ID :- ";
        cin>>adh_id;
        parking p1(name, slot_No, cin_time, adh_id);
        p1.printer();
        cout<<"ENTER 1 TO CONTINUE AND ANY OTHER NUMBER TO DISCONTINUE :- ";
        cin>>t;
    } 
    return 1;   
}
