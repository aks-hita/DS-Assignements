#include<iostream>
#include<string>
using namespace std;
int main(){
    char str1[9]="Hey Jude",str2[9];
    for(int i=0;i<9;i++){
        str2[i]=str1[7-i];
    }
    str2[8]='\0';
    cout<<"The first string is "<<str1;
    cout<<endl<<"The second string is "<<str2;
    return 0;
}