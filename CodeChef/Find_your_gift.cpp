// https://www.codechef.com/problems/GIFTSRC

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x=0,y=0;
	    cin>>n;
	    char s[n];
	    cin>>s;
	    char c;
	    if (s[0]=='L'){
	        c='x';
	        x--;
	    }
	    else if (s[0]=='R'){
	        c='x';
	        x++;
	    }
        else if (s[0]=='U'){
            c='y';
            y++;
        }
        else if (s[0]=='D'){
            c='y';
            y--;
        }
        
        for (int i=0;i<n;i++){
            if (s[i]=='L' && c!='x'){
                x--;
                c='x';
            }
            else if (s[i]=='R' && c!='x'){
                x++;
                c='x';
            }
            else if (s[i]=='U' && c!='y'){
                y++;
                c='y';
            }
            else if (s[i]=='D' && c!='y'){
                y--;
                c='y';
            }
        }
        cout<<x<<" "<<y<<"\n";
	}
	return 0;
}
