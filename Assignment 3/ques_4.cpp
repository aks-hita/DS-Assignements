#include<iostream>
using namespace std;
class stack{
    public:
    string expr;
    string output;
    char stk[20];
    int top=-1;
    void init(string s){
        expr='('+s+')';
        cout<<"The string is "<<expr<<endl;
    }
    int isEmpty(int top){
        if(top==-1){
            return -1;
        }
        return 0;
    }
    void push(char input,int* top){
        *top=*top+1;
        stk[(*top)]=input;
    }
    int value(char x){
        if(x=='^'){
            return 3;
        }
        if(x=='*'||x=='/'){
            return 2;
        }
        if(x=='-'||x=='+'){
            return 1;
        }
        if(x=='('||x==')'){
            return 0;
        }
       return 0; 
    }
    char peek(int* top){
        int ret;
        if(isEmpty(*top)==-1){
            cout<<"Stack is empty";
            return -1;
        }
        return(stk[*top]);
    }
    char pop(int* top){
        int ret;
        if(isEmpty(*top)==-1){
            cout<<"Stack is empty";
            return -1;
        }
        return(stk[(*top)--]);
    }
    void oup(char a){
        int n=output.length();
        output+=a;
    }
    void postfix(char in, int* top){
        if(in=='^'||in=='+'||in=='-'||in=='*'||in=='/'){
            int v=value(in);
            int ch=peek(top);
            if(v>=ch){
                oup(pop(top));
                push(in,top);
            }
            else{
                push(in,top);
            }
            return;
        }
        else if(in=='('){
            push(in,top);
        }
        else if(in==')'){
            while(peek(top)!='('){
                oup(pop(top));
            }
        }
        else{
            oup(in);
        }
    }
    void check(int* top){
        int a=0;
        while(a<=expr.length()-1){
            postfix(expr[a],top);
            a++;
        }
    }
};
int main(){
    stack s;
    string exp="A+((B/C)*D)^E";
    cout<<"The Expression is "<<exp<<endl;
    s.init(exp);
    s.check(&s.top);
    cout<<"The Postfix form will be "<<s.output;
    return 0;
}