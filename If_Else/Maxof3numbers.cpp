//Ques:Find the maximum of three numbers using if else statements.
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter 3 Numbers : ";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3){
        cout<<"Max is: "<<n1<<endl;
    }
    else if(n2>n3 && n2>n1){
        cout<<"Max is: "<<n2<<endl;
    }
    else{
        cout<<"Max is: "<<n3<<endl;
    }
    
    return 0;
}