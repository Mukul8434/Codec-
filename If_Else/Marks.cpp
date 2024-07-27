#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    // if(marks>33){
    //     cout<<"pass"<<endl;
    // }
    // else{
    //     cout<<"Fail"<<endl;
    // }
    
    // Ternary Operator Used Here--> 
    marks>33?cout<<"Pass":cout<<"Fail"<<endl;

    return 0;
}