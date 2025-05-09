//program to reverse an given array using recursion
#include<iostream>
using namespace std;
//using single variable i 
void recur8_a(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    recur8_a(i+1,arr,n);
}
//using 2 variables f and l for swaping 
void recur8_b(int f,int l, int arr[]){
    if(f>=l)return;
    swap(arr[f],arr[l]);
    recur8_b(f+1,l-1,arr);
}//uncomment function call when needed 

int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    recur8_a(0,arr,n);
    //recur8_b(0,n-1,arr);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}