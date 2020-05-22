#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    
    ll start=1, end, ans=0;
    for(ll i=0;i<m;i++){
        cin>>end;
        if(start<=end)
            ans+=(end-start);
        else
            ans+=(n-start+end);
        start=end;
    }
    cout<<ans;
}
