#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(void){
    // Your code here!
 int n,h1,m1,h2,m2;
cin>>n;

int ans=0;
cin>>h1>>m1;
int count=1;
n--;
while(n--){
 cin>>h2>>m2;
 if(h1==h2 && m1==m2)
 {
     count++;
 }
 else{
     ans= max(count,ans);
     count=1;
 }
 h1=h2;m1=m2;
}
ans= max(count,ans);
cout<<ans<<endl;
}
