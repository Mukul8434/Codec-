//Ques:Write a program to take input from user for Cost price(C.P)and Selling price(S.P)amd Calculate Profit or Loss.
#include<iostream>
using namespace std;
int main(){
    int CP;
    cout<<"Enter the Cost price :"<<endl;
    cin>>CP;
    int SP;
    cout<<"Enter the Selling price :"<<endl;
    cin>>SP;
    
    if(CP>SP){
        cout<<"Loss"<<endl;
        int Loss=CP-SP;
        cout<<"The result is: "<<Loss<<endl;
    }
    else if(SP>CP){
        cout<<"Profit"<<endl;
        int Profit=SP-CP;
        cout<<"The result is: "<<Profit<<endl;
    }
    else{
        cout<<"Neither Profit nor Loss"<<endl;
    }

    return 0;
}