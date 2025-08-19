#include<iostream>
using namespace std;
void display(int array[10],int len){
    cout<<"The Array is ";
    int i=0;
    for(i=0;i<len;i++){
        cout<<array[i]<<endl;
    }
}
void insert(int *array,int len){
    int ind,num,i;
    cout<<"Enter the number you wish to insert and the index /(starting from 0)";
    cin>>num>>ind;
    for(i=len;i>ind;i--){
        array[i]=array[i-1];
    }
    array[ind]=num;
    display(array,len+1);
    len++;
}
int del(int *array,int len){
    int ind,i;
    cout<<"Enter the index of the number you wish to delete (starting from 0)";
    cin>>ind;
    int temp=array[ind];
    for(i=ind;i<=len-2;i++){
        array[i]=array[i+1];
    }
    len=len-1;
    return temp;
}
void linSearch (int array[10],int len){
    int n,pos=-1;
    cout<<"Enter number you wish to find "; cin>>n;
    for(int i=0;i<len;i++){
        if(array[i]==n){
            pos=i;
            break;
        }
    }
    if(pos==-1)
    cout<<"Not found.";
    else 
    cout<<"The position is "<<pos<<endl;
}
int main(){
 int n,arr[10],opt,num,a;
 cout<<"MENU"<<endl<<"Enter the desired length of the array ";
 cin>>n;
 while (n>10){
    cout<<"please enter a length less than (or equal to) 10 ";
    cin>>n;
 }
 cout<<"1. CREATE"<<endl;
 for(int i=0;i<n;i++){
    cout<<"Enter value for index "<<i<<" ";
    cin>>arr[i];
 }
do {
 cout<<"Choose an option:\n2.DISPLAY \n3.INSERT \n4.DELETE \n5.LINEAR SEARCH \n6.EXIT "<<endl;
 cin>>opt;
 switch(opt){
    case 2:
         display(arr,n);
         break;
    case 3:
        insert(&arr[0],n);
        n=n+1;
        break;
    case 4:
         num = del(arr,n);
         display(arr,n-1);
         n=n-1;
         cout<<endl<<"The number deleted is "<<num;
         break;
    case 5:
         linSearch(arr,n);
         break;
    case 6:
        cout<<"Thankyou!";
        break;
   }
}
while (opt != 6);
 return 0;
}