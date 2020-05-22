#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    string out;
    for(char c:s){
		if((c>='A'&& c<='Z') || (c>='a' && c<='z')){
			c= tolower(c);
			if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='y')
            continue;
        }
		out+='.';
		out+=c;
    }
    cout<<out;
    return 0;
}
