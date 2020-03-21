# https://www.codechef.com/problems/ICM2006

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    	string s;
    	cin>>s;
    	int n = s.length();
        int a[5][2];
        int last = 0;
        
        a[0][0] = 0;
        a[0][1] = 1;
        a[1][0] = 2;
        a[1][1] = 1;
        a[2][0] = 3;
        a[2][1] = 1;
        a[3][0] = 4;
        a[3][1] = 1;
        a[4][0] = 0;
        a[4][1] = 1;
        
        for(int i = 0; i<n;i++){
           last = a[last][s[i]-'0'];
        }
        
        if (last == 4){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
	}
	return 0;
}
