#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4};

    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }
    //For each loop
    for(int ele:arr){
        cout<<ele<<endl;
    }
    //While loop
    int index=0;
    while(index<size){
        cout<<arr[index]<<endl;
        index++;
    }
    
    return 0;
}