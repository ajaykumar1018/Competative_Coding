// https://www.codechef.com/problems/GARDENSQ

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, m, c = 0;
		cin >> n >> m;
		char a[n][m];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				for(int k = 1; k < n; k++) {
					if(i + k < n && j + k < m && a[i][j] == a[i + k][j] && a[i][j] == a[i][j + k] && a[i][j] == a[i + k][j + k]) {
						c++;
					}
				}
			}
		}
		cout << c << "\n";
	}
}
