#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, top, left, right;
	cin >> n >> top;
	bool fool = true;
	for(int i = 0; i < n; i++){
		cin >> left >> right;

		if(left == top || right == top || (7 - left) == top || (7 - right) == top)
			fool = false;
	}
	if(fool)
		cout <<"YES";
	else cout <<"NO";
}