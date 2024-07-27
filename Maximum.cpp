//Ques:-Find the maximum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,32,8,4,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;

    return 0;
}