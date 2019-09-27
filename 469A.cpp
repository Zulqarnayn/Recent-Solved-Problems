#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, p, q;
	cin >> n;
	cin >> p;
	int ap[p + 2], mark[n+12];
	memset(mark, 0, sizeof(mark));
	for(int i = 0; i < p; i++){
		cin >> ap[i];
		mark[ap[i]]++;
	}
	cin >> q;
	int aq[q+2];
	for(int i = 0; i < q; i++){
		cin >> aq[i];
		mark[aq[i]]++;
	}
	for(int i = 1; i <= n; i++){
		if(mark[i] == 0) return cout << "Oh, my keyboard!", 0;
	}
	cout << "I become the guy.";

}