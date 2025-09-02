#include<iostream>
using namespace std;
class stack{
    public:
    string expr;
    char str[20];
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
        str[(*top)]=input;
    }
    char peek(int* top){
        int ret;
        if(isEmpty(*top)==-1){
            cout<<"Stack is empty";
            return -1;
        }
        return(str[*top]);
    }
    char pop(int* top){
        int ret;
        if(isEmpty(*top)==-1){
            cout<<"Stack is empty";
            return -1;
        }
        return(str[(*top)--]);
    }
    int checkPar(char in, int* top){
        if(in=='('||in=='{'||in=='['){
            push(in,top);
            return 0;
        }
        if((in==')'&& peek(top)=='(')||(in=='}'&& peek(top)=='{')||(in==']'&& peek(top)=='[')){
            pop(top);
            return 0;
        }
        return -1;
    }
    void check(int* top){
        int a=0;
        while(a<=expr.length()-1){
            if(checkPar(expr[a],top)==-1){
                cout<<"The parenthesis aren't balanced."<<endl;
                return;
            }
            a++;
        }
        cout<<"The parenthesis are balanced."<<endl;
    }
};
int main(){
    stack s1;
    s1.init("[{({}[)}]");
    s1.check(&s1.top);
    cout<<"The program ends here.";
    return 0;
}