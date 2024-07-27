//Ques:-Write a program to print alphabet diamond pattern.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int line=1;line<=n;line++){
        int no_of_spaces=(n-line);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }

        int no_of_chars=2*line-1;
        for(int i=0;i<no_of_chars;i++){
            char ch=(char)('A'+i);
            cout<<ch;
        }
        cout<<endl;
    }
    for(int line=n+1;line<=2*n-1;line++){
        int no_of_spaces=(line-n);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";
        }
        int no_0f_chars=2*(2*n-line)-1;
        for(int j=0;j<no_0f_chars;j++){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    return 0;
}