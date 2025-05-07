//sum of 1st n numbers using parametrized recursion.

#include<iostream>
using namespace std;
//Parameterized method
void recur6_a(int i,int sum){
    
    if(i<1){//base condition
        cout<<sum;//printing of sum
        return;
    }
    
    recur6_a(i-1,sum+i);//recursive call
}
//same program but here we are using backtracking method,remove comment if want to use
int recur6_b(int n){
    if(n==0) return 0;
    return n + recur6_b(n-1);
}
int main(){
    int c;
    cin>>c;
    /*int sum = recur6_b(c);
    cout<<sum;*/
    recur6_a(c,0);//function call
}