#include<iostream>
using namespace std;
void display(int a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i]<<endl;
    }
}
void bubbleSort(int a[],int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={64,34,25,12,22,11,90};
    display(arr,7);
    cout<<"After sorting:"<<endl;
    bubbleSort(arr,7);
    display(arr,7);
    return 0;
}