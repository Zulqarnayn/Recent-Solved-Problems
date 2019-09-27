#include <bits/stdc++.h>
using namespace std;

int main(){
	map <int, int> map_val;
	int a;
	for(int i = 0; i < 4; i++){
		cin >> a;
		map_val[i+1] = a;
	}

	string process;
	cin >> process;
	int sum = 0;
	for(int i = 0; i < process.size(); i++){
		int num = process[i] - '0';
		sum += map_val[num];
	}
	cout << sum << '\n';
}