//Ques:-reverse the digits of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    cout<<r;

    return 0;
}