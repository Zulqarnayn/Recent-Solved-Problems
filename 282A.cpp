#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt  = 0;
	string st;
	for(int i = 0; i < n; i++){
		cin >> st;
		if(st[0] == '+' || st[2] == '+')
			cnt++;
		else if(st[0] == '-' || st[2] == '-')
			cnt--;
	}
	cout << cnt << endl;
}