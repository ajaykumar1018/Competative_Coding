// https://www.codechef.com/problems/LUCKY5

#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    long long int c=0;
	    for (long long int i=0;i<s.length();i++){
	        if (s[i]!='4' && s[i]!='7'){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
