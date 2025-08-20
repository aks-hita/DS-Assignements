#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstName, lastName, fullName;
    cout<<"Enter your first name: "; cin>> firstName;
    cout<<"Enter your last name: "; cin>> lastName;
    fullName=firstName + " " + lastName;
    cout<<"Your full name is "<<fullName;
    return 0;
}