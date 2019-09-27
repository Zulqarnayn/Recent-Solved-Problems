#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	map <int, int> mp;

	for(int i = n - 1; i >= 0; i--){
		mp[v[i]]++;		
	}
	
}