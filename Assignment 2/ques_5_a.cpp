#include<iostream>
using namespace std;
int main(){
    int a[3]={1,2,3};
    int n=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<a[n]<<" ";
                n++;
            }
            else 
                cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}