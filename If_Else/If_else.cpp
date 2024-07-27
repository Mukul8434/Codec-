#include<iostream>
using namespace std;
int main(){
    
    int score;
    cin>>score;

    //score >80,print well done
    //score =50-80,print can improve
    //score <50,print poor performance

    if(score>80){
        cout<<"Well done!"<<endl;
    }
    else{
        cout<<"Poor performance"<<endl;
    }

    return 0;
}