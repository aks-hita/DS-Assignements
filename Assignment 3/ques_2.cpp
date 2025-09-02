#include<iostream>
#include<string>
using namespace std;
class stack{
    public:
    string str;
    int top;
    void init(string s,int* top){
        str=s;
        *top=str.length()-1;
        cout<<*top<<endl;
    }
    int isEmpty(int top){
        if(top==-1){
            return -1;
        }
        return 0;
    }
    char pop(int* top){
        int ret;
        if(isEmpty(*top)==-1){
            cout<<"Stack is empty";
            return -1;
        }
        return(str[(*top)--]);
    }
    void rev(int* top){
        while(*top>=0){
            cout<<pop(top);
        }
    }
};
int main(){
    stack s1;
    s1.init("DataStructures",&s1.top);
    cout<<endl;
    s1.rev(&s1.top);
    return 0;
}