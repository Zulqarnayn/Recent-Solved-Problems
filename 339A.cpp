#include <bits/stdc++.h>
using namespace std;

int main(){
	string x;
	cin >> x;
	vector <int> v;
	for(int i = 0; i < x.size(); i++){
		if(x[i] != '+')
			v.push_back(x[i] - '0');
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
		if(i != v.size() - 1)
			cout << '+';
	}
	
}