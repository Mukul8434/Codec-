#include<iostream>
using namespace std;
int add(int n,int m){
    int sum=n+m;
    return sum;
}
int main(){
    int a=5;
    int b=4;

    cout<<add(a,b)<<endl;
    
    return 0;
}