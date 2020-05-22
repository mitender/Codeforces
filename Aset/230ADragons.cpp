#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    
    int a,b;
    vector<pair<int, int>> power;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        power.push_back(make_pair(a,b));
    }
    
    sort(power.begin(),power.end());
    auto it=power.begin();
   for(;it!=power.end();it++){
       if(s <= it->first)
        break;
        s+=it->second;
   }
   if(it==power.end())
    cout<<"YES";
    else
    cout<<"NO";
}
