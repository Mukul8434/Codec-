//Ques:-Given radius of a circle.Write a function to print the area and circumference of the cirle.
#include<iostream>
using namespace std;
double circumference(int r){
    return 2*3.14*r;
}
double area(int r){
    return 3.14*r*r;
}
int main(){
    int r=3;
    cout<<"area:"<<area(r)<<endl<<"Circumference:"<<circumference(r)<<endl;

    return 0;
}