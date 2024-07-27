//Ques:-Print the sum of the stream of N integers in the input using do-while loop.
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    int sum=0;
    do{
        int sum;
        cin>>sum;
        sum+=sum;
        N--;
    }while(N>0);
    cout<<sum<<endl;
    
    return 0;
}