#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define ui unsigned int
using namespace std;

int main()
{
    ui a;
    cin>>a;
    
    int count=0, b=1;
    while(a!=0){
        if(a&b)
        count++;
        a=a>>1;
    }
    cout<<count;
}
