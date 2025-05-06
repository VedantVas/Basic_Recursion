//printing numbers from n to 1 linearly using backtracking & recursion.

#include<bits/stdc++.h>
using namespace std;

void recur5(int i,int n){
    if(i>n) return;//base condition 
    recur5(i+1,n);//recursive call
    cout<<i<<endl;//printing in backtrack manner 
}

int main(){
    int n;
    cin>>n;
    recur5(1,n);//function call
}
//For better understanding how backtracking is working in it please dry run the code by
//by yourself.