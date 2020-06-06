#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(void){
    // Your code here!
 int n,m;
 cin>>n>>m;
 
 if(m%n!=0)
 {
     cout<<-1<<endl;
     return 0;
 }
 
 m=m/n;
 bool flag=true;
 int ans=0;
 while(flag){
     flag=false;
    if(m%2==0){
        m=m/2;
        flag=true;
        ans++;
    }
    if(m%3==0){
        m=m/3;
        flag=true;
        ans++;
    }
 }
 if(m==1)
    cout<<ans<<endl;
else
    cout<<-1<<endl;
}  
