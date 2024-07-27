//Ques:-Calculate the sum of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    
    return 0;
}