#include <iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
#define PI 3.14159265358979323846264338327950288
using namespace std;
int main(void){
  int n,m;
  cin>>n>>m;
  int min= n%2==0?n/2:n/2+1;
  int max=n;
  if(m>max)
    {
        cout<<-1;
        return 0;
    }
  if(min%m==0)
  cout<<min;
  else{
      int diff=(m-min%m);
      cout<<min-diff +diff*2;
  }
    }


