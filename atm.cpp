#include<iostream> //atm machine
using namespace std;
class Data{
    int pin;
    double balance;
    public:
    void setdata(){
        pin=7310;
        balance=4000;
    }bool verifypin() {
        int Pin;
        cout << "Enter the pin = ";
        cin >> Pin;
        if (Pin == pin) {
            cout << "Pin match" << endl;
            return true;
        } else {
            cout << "Pin invalid" << endl;
            return false;
        }
    }
    
    void checkbalance(){
        cout<<"balance ="<<balance<<endl;
    }
    void deposite(){
        int amount;
        cout<<"enter the amount =";
        cin>>amount;
        balance+=amount;
        cout<<"deposite successfully ="<<balance<<endl;
    }
    void withdraw(){
        int Amount;
        cout<<"enter the amount =";
        cin>>Amount;
        if(balance>=Amount){
            cout<<"remaing amount is ="<<balance-Amount<<endl;
        }
        else cout<<"invalid transaction"<<endl;
    }
    void Exit(){
        cout<<"exit"<<endl;
    }


    void menu(){
        cout<<"*******welcome to atm*******"<<endl;
        cout<<"1. check balance"<<endl;
        cout<<"2. deposite"<<endl;
        cout<<"3. withdraw "<<endl;
        cout<<"4.exit"<<endl;
    }
};
int main(){
    Data s;
    s.setdata();
    int at=3;
    while(at>0){
        if(s.verifypin()){
            break;
        }
        else {
            at--;
            cout<<"attempt out ="<<at<<endl;
        }
    }
    if (at==0){
        cout<<"card block"<<endl;
        return 0;
    }
    
    int choice;
    do{
        s.menu();



        cout<<"enter the choice =";
        cin>>choice;
        switch (choice){
            break;
            case 1:
            s.checkbalance();
            break;
            case 2:
            s.deposite();
            break;
            case 3:
            s.withdraw();
            break;
            case 4:
            s.Exit();
        }
    }while(choice>0);
    return 0;
}