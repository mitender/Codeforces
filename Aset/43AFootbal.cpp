#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin>>n;
    int c1=0,c2=0;
    string s, s1, s2;
    while(n--){
        cin>>s;
       if(s1.empty() || s1==s){
           if(s1.empty())
                s1=s;
           c1++;
       }else{
		   if(s2.empty())
			   s2=s;
            c2++;
       }
       
    }
    if(c1>c2){
        cout<<s1<<endl;
    }else{
        cout<<s2<<endl;
    }
}
  
