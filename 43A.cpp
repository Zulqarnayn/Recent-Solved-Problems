#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string name, winner;
	cin >> n;
	map <string, int > mp;
	for(int i = 0; i < n; i++){
		cin >> name;
		mp[name]++;
	}
	int mx = 0;
	for(auto i: mp){
		if(i.second > mx) {
			mx = i.second;
			winner = i.first;
		}
	}
	cout << winner;

}