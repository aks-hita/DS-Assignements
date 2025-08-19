#include<iostream>
using namespace std;
void input(int a[3][3]){
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter a value ";
            cin>>a[i][j];
        }
    }
}
void display(int arr[][3],int l, int m){
    for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mult(int a[3][3],int b[3][3]){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=(a[i][1]*b[j][1])+(a[i][2]*b[j][2])+(a[i][3]*b[j][3]);
        }
    }
    cout<<endl<<"After multiplication!"<<endl;
    display(c,3,3);
}
int main(){
    int a[3][3],b[3][3];
    cout<<"For the first Array A of 3x3"<<endl;
    input(a);
    cout<<"For the second Array B of 3x3"<<endl;
    input(b);
    cout<<"A= "<<endl;
    display(a,3,3);
    cout<<"B= "<<endl;
    display(b,3,3);   
    mult(a,b);
    return 0;
}