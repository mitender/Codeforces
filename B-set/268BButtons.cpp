#include <iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
#define ll long long
#define PI 3.14159265358979323846264338327950288
using namespace std;
int main(void){
 
ll n;
cin>>n;
ll ans=0, k=n;
n=n-1;
for(int i=0;i<k;i++){
   ans+=n+ n*i+1;
   n--;
}
cout<<ans;
    
}


