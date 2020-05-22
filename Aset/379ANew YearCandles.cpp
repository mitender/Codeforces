#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int a,b,c=0,ans=0;
    cin>>a>>b;
    while(a>0){
        ans+=a;
        c=c+a;
        a=c/b;
        c=c%b;
    }
    cout<<ans;
}
