#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;
    int val =a+b+c;
    ans= max(val, ans);
    val= (a+b)*c;
    ans= max(ans, val);
    val= a*(b+c);
    ans= max(val, ans);
    val=a*b*c;
    ans= max(val, ans);
    cout<<ans;
    return 0;
}
