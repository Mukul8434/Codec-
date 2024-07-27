/*Ques:Print "odd"if the input value is odd,otherwise print "even."
Note:-Input value is between 1 and 10^6.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    if(n%2==0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
    
    return 0;
}