// https://www.codechef.com/problems/STUPMACH

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int s[n];
	    cin>>s[0];
	    long long int min=s[0],c = s[0];
	    for (long long int i=1;i<n;i++){
	        cin>>s[i];
	        if (s[i]<min){
	            min = s[i];
	        }
	        c = c + min;
	    }
	    cout<<c<<"\n";
	    
	}
	return 0;
}
