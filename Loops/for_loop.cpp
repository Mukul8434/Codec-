//Ques:-Print the sum of the first n natural numbers,where n is the input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum is: "<<sum<<endl;
    
    return 0;
}