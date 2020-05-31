#include <iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
#define PI 3.14159265358979323846264338327950288
using namespace std;
int main(void){
   int t=0;
   cin>>t;
   while(t--){
       long long  a,b,x,y;
       cin>>x>>y>>a>>b;
       cout<<min((abs(x-y)*a +min(x,y)*b), (x*a+y*a))<<endl;
   }
    }


