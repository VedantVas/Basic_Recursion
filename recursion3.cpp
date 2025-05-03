#include<iostream>
using namespace std;

void recur3(int n){
    if(n<1) return;
    cout<<n<<" ";
    recur3(n-1);
}

int main(){
    int c;
    cin>>c;
    recur3(c);
}