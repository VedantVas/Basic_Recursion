//program, for factorial of n using recursion

#include<bits/stdc++.h>
using namespace std;
//Parametrized method
void recur7_a(int i, int fact){
    if(i==0){
        cout<<fact;
        return;
    }
    recur7_a(i-1,fact*i);
}
//Functional method
int recur7_b(int n){
    if(n==0) return 1;
    return n * recur7_b(n-1);
}//uncomment funtion call from main when needed

int main(){
    int n;
    cin>>n;
    /*int fact = recur7_b(n);
    cout<<fact;*/
    recur7_a(n,1);
}