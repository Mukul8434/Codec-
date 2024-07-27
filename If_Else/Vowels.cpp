//By using Switch Case
#include<iostream>
using namespace std;
int main(){
    char alphabets;
    cout<<"Enter a alphabet: ";
    cin>>alphabets;

    switch (alphabets){
        case 'a':
        cout<<"It is a vowel"<<endl;
        break;
        case 'e':
        cout<<"It is a vowel"<<endl;
        break;
        case 'i':
        cout<<"It is a vowel"<<endl;
        break;
        case 'o':
        cout<<"It is a vowel"<<endl;break;
        case 'u':
        cout<<"It is a vowel"<<endl;
        break;
        default:
        cout<<"It is Consonant"<<endl;
    }

    return 0;
}