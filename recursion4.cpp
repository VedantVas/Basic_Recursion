//Printing linearly from 1 to n using backtracking & recursion

#include<bits/stdc++.h>
using namespace std;

void recur4(int i ,int n){
    if(i<1) return;//base condition
    recur4(i-1,n);//recursive call 
    cout<<i<<endl;// will print numbers in backtracking manner 
}

int main(){
    int n;
    cin>>n;
    recur4(n,n);//function call
}