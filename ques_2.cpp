#include<iostream>
using namespace std;
void input(int arr[10]){
    for(int i=0;i<10;i++){
        cout<<"Enter the element for index "<<i<<" ";
        cin>>arr[i];
    }
}
void sort(int arr[10]){
    int temp;
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
        }
    }
}
void display(int arr[],int len){
    for(int k=0;k<len;k++){
            cout<<arr[k]<<endl;
        }
}
int del(int arr[10],int ind,int len){
    int temp=arr[ind];
    for(int i=ind;i<9;i++){
        arr[i]=arr[i+1];
    }
    len=len-1;
    return len;
}
int dupe(int arr[10]){
    int n=10;
    for(int i=0;i<10;i++){
        if(arr[i]==arr[i+1])
          n = del(arr,i+1,n);
     }
    return n;
}
int main(){
int a[10],len=10;
int b[9]={5,7,8,9,6,3,2,7,1};
/*display(b,9);
sort(b);
cout<<"Here";
display(b,9);*/
input(a);
sort(a);
display(a,len);
cout<<"After this"<<endl;
len=dupe(a);
display(a,len);
return 0;
}