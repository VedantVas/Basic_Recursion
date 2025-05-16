//program to check whether the given string is palindrom or not
#include<bits/stdc++.h>
using namespace std;

bool recur9(int i, string &s){
    if(i >= s.size()/2) return true;//base condition 1
    if(s[i]!=s[s.size()-i-1])return false;//base condition 2
    return recur9(i+1,s);
}
/*if base condition 1 get satisfied the answer will be 1 and output of the program will
be "It is palindrom and if 2 gets satisfied it returns 0 so answer will be "IT is not 
a palindrom*/
int main(){
    string s;
    cin>>s;
    int n = recur9(0,s);
    if(n==1){
        cout<<"It is Palindrom";
    }
    else{
        cout<<"It is not a palindrom";
    }  
    return 0;  
}