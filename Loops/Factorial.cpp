//Ques:-Print the first n factorial numbers.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<"The factorial of a number: "<<fact<<endl;
    }
    
    return 0;
}