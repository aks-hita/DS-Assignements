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
void display(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sum(int a[3][3]){
    int sum,sum2;
    for (int i=0;i<3;i++){
        sum=a[i][0]+a[i][1]+a[i][2]; 
        cout<<"The sum of the row "<<i+1<<" is "<<sum<<endl;
    }
    for (int j=0;j<3;j++){
        sum2=a[0][j]+a[1][j]+a[2][j]; 
        cout<<"The sum of the column "<<j+1<<" is "<<sum2<<endl;
    }
}
int main(){
    /*int a[3][3];
    input(a);
    display(a);
    sum(a);*/
    int i;
int arr[5] = {1};
for (i = 0; i < 5; i++)
printf("%d",arr[i]);
    return 0;
}