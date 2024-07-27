//Ques:-Find the second largest element in the given array.
#include<iostream>
using namespace std;
int largestElementIndex(int arr[],int size){
    
    int max=INT32_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){
    int arr[]={1,2,4,5,3,6};
    int indexoflargest=largestElementIndex(arr,6);
    cout<<arr[indexoflargest]<<endl;

    arr[indexoflargest]=-1;
    int indexofsecondlargest=largestElementIndex(arr,6);

    cout<<arr[indexofsecondlargest]<<endl;

    return 0;
}