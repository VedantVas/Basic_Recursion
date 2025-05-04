//This program will use recursion to print numbers linearly from 1 to n using recursion.

//Code 
#include<bits/stdc++.h>
using namespace std;

void recur2(int i, int n){
    if(i>n) return;//Base condition
    cout<<i<<endl;
    recur2(i+1,n);// recursive call
}

int main(){
    int n;
    cin>>n;
    recur2(1,n);//function call
}
//Output:- 1,2,3,4....... upto n.