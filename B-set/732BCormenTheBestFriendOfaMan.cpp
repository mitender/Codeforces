#include <iostream>
using namespace std;
int main(void){
	
   int n,k, prev_walk=0, cur_walk=0, ans=0;
   
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
    
    
   for(int i=1;i<n;i++){
       if(a[i]+a[i-1] <k){
           int diff=k-(a[i]+a[i-1]);
           a[i]+=diff;
           ans+=diff;
       }
        
   }
   cout<<ans<<endl;
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";   
   }
   
}
  
