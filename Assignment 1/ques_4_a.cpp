#include<iostream>
using namespace std;
void rev(int arr[10]){
    for(int i=0;i<5;i++){
        int temp=arr[i];
        arr[i]=arr[9-i]; 
        arr[9-i]=temp;
     }
}
void display(int arr[10]){
    for (int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int a[10]={6,7,8,9,10,11,12,13,14,15};
    display(a);
    rev(a);
    cout<<"Now we reverse!"<<endl;
    display(a);
    return 0;
}