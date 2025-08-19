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
    for(int i=ind;i<len;i++){
        arr[i]=arr[i+1];
    }
    len=len-1;
    return len;
}
int dupe(int arr[10],int len){
    int i=0;
    while(i<len-1){
        if(arr[i]==arr[i+1]){
          len = del(arr,i+1,len);
        }
        else 
            i++;
     }
    return len;
}
int main(){
int a[10],len=10;
input(a);
sort(a);
display(a,len);
cout<<"After removing duplicates."<<endl;
len=dupe(a,len);
cout<<"hello?";
display(a, len);
return 0;
}