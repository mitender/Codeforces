#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(void){
    // Your code here!
 int t,n,m,x,y;
 cin>>t;
 
 while(t--){
 cin>>n>>m>>x>>y;
 
 char arr[n][m];
 
 for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    

int pair=0, dot=0;
 for(int i=0;i<n;i++){
     int prev_tile=-1;
    for(int j=0;j<m;j++){
        if(arr[i][j]=='.'){
            if(j>0 && arr[i][j-1]=='.' && prev_tile!=j-1){
                pair++;
                prev_tile=j;
            }
        dot++;        
        }
    }
}

if(2*x <=y)
    cout<<dot*x<<endl;
else{
    dot-=pair*2;
    cout<<pair*y+ dot*x<<endl;
}
   
}
}  
