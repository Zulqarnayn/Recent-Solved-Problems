#include <bits/stdc++.h>
using namespace std;

bool ans(int a, int k){

	set <int> container;
	while(a){
		container.insert(a % 10);
		a /= 10;
	}

	cerr << container.size() << endl;
	return container.size() <= k;
}

int main()
{
	int n, k, sol = 0, a;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a;
		sol += ans(a, k);
	}
	cout << sol << endl;
}