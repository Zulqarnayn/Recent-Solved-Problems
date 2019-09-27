#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	map <char , int> mp;
	string st;
	cin >> st;

	for(int i = 0; i < st.size(); i++){
		mp[st[i]]++;
	}

	int one = mp['n'];
	int zero = mp['z'];

	for(int i = 0; i < one; i++)
		cout << 1 <<' ';
	for(int i = 0; i < zero; i++)
		cout << 0 << ' ';
}