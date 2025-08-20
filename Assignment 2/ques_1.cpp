#include<iostream>
using namespace std;
#define LEN 5
void input(int arr[LEN]){
    for(int i=0;i<LEN;i++){
        cout<<"Enter the element for index "<<i<<" ";
        cin>>arr[i];
    }
}
int linSearch(int arr[LEN],int num){
    int pos;
    for(int i=0;i<LEN;i++){
        if(num==arr[i]){
            pos=i;
        }
        else {
            pos= -1;
        }
    }
    return pos;
}
int main(){
    int a[LEN],num,pos;
    input(a);
    cout<<"What number are you looking for? ";
    cin>>num;
    pos=linSearch(a,num);
    if(pos=-1){
        cout<<num<<" not found.";
    }
    else{
        cout<<"The position of "<<num<<" is "<<pos;
    }
    return 0;
}