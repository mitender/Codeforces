#include <iostream>
using namespace std;
int main(void){
    // Your code here!
   int t,a,b,n,S;
   
   
   cin>>t;
   while(t--){
   cin>>a>>b>>n>>S;
   
   int rn= S/n;
   if(a>=rn)
   S-=rn*n;
   else
   S-=a*n;
   
   if(b>=S)
   cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
}
  
