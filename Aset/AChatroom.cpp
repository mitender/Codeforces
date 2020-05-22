#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string h= "hello";
    int slen= s.length(),i=0,j=0;
    
    while(i<slen && j<5){
        if(s[i]==h[j])
            j++;
        i++;
    }
    if(j==5)
        cout<<"YES";
    else
        cout<<"NO";
        
    return 0;
}
