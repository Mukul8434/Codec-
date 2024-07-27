//Ques:-Print the sum of the first n natural numbers,where n is the input.(By using While loop).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    
    int sum=0;
    int i=1;  // loop variable

    while(i<=n){  //condition
        sum+=i;
        i++;  //updating loop variable
    }
    cout<<"Sum is: "<<sum<<endl;

    return 0;
}