//Ques:-Find the sum of the following series.(s=1-2+3-4....n).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
        if(i%2==0){
            sum=sum-i;
        }
    }
    cout<<sum;

    return 0;
}