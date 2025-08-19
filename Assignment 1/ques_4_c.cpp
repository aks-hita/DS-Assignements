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
void transpose(int a[3][3]){
    for (int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    cout<<"The transpose of this array is: "<<endl;
    display(a,3,3);
}
int main(){
    int arr1[3][3];
    input(arr1);
    display(arr1,3,3);
    transpose(arr1);
    return 0;
}