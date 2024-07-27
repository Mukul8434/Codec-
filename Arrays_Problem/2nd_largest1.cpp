//Ques:-Find the second largest element in the given array.
#include<iostream>
using namespace std;

int secondLargestElement(int arr[],int size){
    int max=INT32_MIN;
    int second_max=INT32_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;
}
int main(){
    int arr[]={2,3,5,7,6,1,7};
    int n=7;

    cout<<secondLargestElement(arr,n)<<endl;

    return 0;
}