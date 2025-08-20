#include<iostream>
using namespace std;
int missing(int arr[],int start,int end){
    int len=end-start;
    for(int i=0;i<len;i++){
        if(arr[i]!=start+i)
            return (start+i);
    }
    return -1;
}
int main(){
    int arr[]={22,23,24,26,27,28};
    cout<<"The missing number is "<<missing(arr,22,28);
    return 0;
}