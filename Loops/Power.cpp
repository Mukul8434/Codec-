//Ques:-given 2 numbers a and b.Find a raise to the power b.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the 1st number: "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the 2nd number: "<<endl;
    cin>>b;
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    cout<<power;

    return 0;
}