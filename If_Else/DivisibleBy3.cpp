//Ques:-Write a program to print the value if it is even and divisible by 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    if((n%2==0) && (n%3==0)){
        cout<<n<<endl;
    }
    return 0;
}