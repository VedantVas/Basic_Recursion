//This program will print numbers from n to 1 linearly using recursion.

#include<iostream>
using namespace std;

void recur3(int n){
    if(n<1) return;//Base condition
    cout<<n<<" ";
    recur3(n-1);//recursive call
}

int main(){
    int c;
    cin>>c;
    recur3(c);//function call
}
//Output:- n.......3,2,1
