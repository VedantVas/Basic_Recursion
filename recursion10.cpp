//program to find the fibonacci sequence using multiple recursion calls.
#include<bits/stdc++.h>
using namespace std;

int recur10(int i){
    if(i<=1) return i;
    int last = recur10(i-1);//1st recursion call
    int sec_last = recur10(i-2);//2nd recursion call
    return last + sec_last;//final output
}

int main(){
    int n ;
    cin>>n;
    cout<<recur10(n);//function call
}
// dry run to know the magic of above code, you will do a tree traversal during it..
