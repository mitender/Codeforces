#include <iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
#define PI 3.14159265358979323846264338327950288
using namespace std;
int main(void){
   int N,x;
   
   cin>>N>>x;
   int count=0;
   for(int i=1; i<=N;i++){
       if(x%i==0 && x/i>=1 && x/i<=N)
        count++;
   }
   cout<<count;
}


