#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, mx = 0;
	cin >> n;

	int ar[n+2];
	for(int i = 0; i < n; i++){
		cin >> ar[i];
		mx = max(mx, ar[i]);
	}
	cout << mx << endl;

}