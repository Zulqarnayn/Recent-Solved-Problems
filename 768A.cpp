#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, val, distinct = 0;
	cin >> n;
	int steward[n + 2], mx = (int)-2e9 , mn = (int)2e9;
	// memset(mark, 0, sizeof(mark));
	for(int i = 0; i < n; i++){
		cin >> steward[i];
		mx = max(mx, steward[i]);
		mn = min(mn, steward[i]);
	}
	int f = -1, s = -1;

	for(int i = 0; i < n; i++){
		if(steward[i] > mn && steward[i] < mx)
			distinct++;
	}
	
	cout << distinct;
}