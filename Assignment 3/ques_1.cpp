#include<iostream>
using namespace std;
#define MAXLEN 10
int isFull(int* ptr){
    int top=*ptr;
    if(top==MAXLEN-1)
        return 1;
    return 0;
}
int isEmpty(int* ptr){
    int top=*ptr;
    if(top==-1){
        cout<<"Stack is empty.";
        return 1;
    }
    return 0;
}
void push(int stack[MAXLEN],int* top,int n){
    int check=isFull(top);
    if(check== 1){
        cout<<"Error: Overflow.";
        return;
    }
    stack[*top+1]=n;
    *top=*top+1;
}
void init(int stack[MAXLEN],int* top,int n){
    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter a number ";
        cin>>num;
        push(stack,top,num);
    }
}
int pop(int stack[MAXLEN],int* top){
    int check=isEmpty(top),ret;
    if(check!=1){
        ret=stack[*top];
        *top=*top-1;
    }
    else {
        ret= -1;
    }
    return ret;
}
int peek(int stack[MAXLEN],int* top){
    int check=isEmpty(top),ret;
    if(check!=1){
        ret=stack[*top];
    }
    else {
        cout<<"Stack is empty.";
        ret=1;
    }
    return ret;
}
void display(int stack[MAXLEN],int top){
    cout<<endl<<"The stack now is ";
    for(int k=0;k<=top;k++){
        cout<<stack[k]<<endl;
    }
}
int main(){
    int stack[MAXLEN];
    int top=-1,opt,n;
    cout<<"How many values do you want to enter? "<<endl;
    cin>>n;
    init(stack,&top,n);
    do{
        cout<<endl<<"Choose an option: "<<endl<<"1. push\n2. pop\n3. isEmpty\n4. isFull\n5. display\n6. peek\n7. exit";
        cin>>opt;
        switch(opt){
            case 1:
                cout<<"Enter a number ";
                int num;
                cin>>num;
                push(stack,&top,num);
                break;
            case 2:
                int val2=pop(stack,&top);
                if(val2!=-1){
                    cout<<"The popped value is "<<val2<<endl;
                }
                break;
            case 3:
                isEmpty(&top);
                break;
            case 4: 
                isFull(&top);
                break;
            case 5:
                display(stack,top);
                break;
            case 6:
                int val1=peek(stack,&top);
                cout<<"The top value is "<<val1<<endl;
                break;
            case 7:
                break;
        }
    }
    while(opt!=7);
}