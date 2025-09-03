#include<iostream>
using namespace std;
class stack{
    public:
    string expr;
    int output;
    int stk[20];
    int top=-1;
    void init(string s){
        expr=s;
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
    int pop(int* top){
        int ret;
        if(isEmpty(*top)==-1){
            cout<<"Stack is empty";
            return -1;
        }
        return(stk[(*top)--]);
    }
    void solv(char inp,int* top){
        int val1=pop(top);
        int val2=pop(top);
        int val3;
        if(inp=='+'){
            val3=val2+val1;
        }
        if(inp=='-'){
            val3=val2-val1;
        }
        if(inp=='*'){
            val3=val2*val1;
        }
        if(inp=='/'){
            val3=val2/val1;
        }
        if(inp=='^'){
            val3=val2^val1;
        }
        push(val3,top);
    }
    void eval(char in, int* top){
        if(in=='^'||in=='+'||in=='-'||in=='*'||in=='/'){
            solv(in,top);
        }
        else{
            int num= in-'0';
            push(num,top);
        }
    }
    void check(int* top){
        int a=0;
        while(a<=expr.length()-1){
            eval(expr[a],top);
            a++;
        }
        if(*top==0){
            output=stk[*top];
        }
    }
};
int main(){
    stack s;
    string exp="234+*6-";
    cout<<"The Expression is "<<exp<<endl;
    s.init(exp);
    s.check(&s.top);
    cout<<"The Result will be "<<s.output;
    return 0;
}