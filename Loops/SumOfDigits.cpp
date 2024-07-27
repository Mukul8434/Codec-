//Ques:-Find the sum of digits in a given number n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int lastdigits=0;
    int sum=0;
    while(n!=0){
        lastdigits=n%10;
        sum=sum+lastdigits;
        n=n/10;
    }
    cout<<sum;
    
    return 0;
}