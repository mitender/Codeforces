#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string h= "hello";
    int slen= s.length(),i=0,j=0;
    
    string ans;
    bool needToChange=true;
    while(i<slen){
        if(i==0){
            if(s[0]>='a' && s[0]<='z')
                 ans=toupper(s[0]);
            else
                ans=tolower(s[0]);
            
        }else{
                if(s[i]>='a' && s[i]<='z'){
                     needToChange=false;
                     break;
                }
                char c= tolower(s[i]);
                ans+=c;
        }
        i++;
          
    }
         if(needToChange==true)
            cout<<ans;
        else
            cout<<s;
            
    return 0;
}
