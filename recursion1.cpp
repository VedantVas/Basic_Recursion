//This following program will print the given name n times using recursion.
#include<bits/stdc++.h>
using namespace std;
 void recur1(int i,int n,string name){
    if(i>=n) return;
    cout<<name<<" ";
    recur1(i+1,n,name); 
 }

 int main(){
    int n;
    cout<<"Enter value for n:";
    cin>>n;
    string name;
    cout<<"Enter the name:";
    cin>>name;
    recur1(0,n,name);
 }
