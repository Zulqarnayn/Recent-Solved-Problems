#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	if(a != b)
		cout << (a.size() > b.size() ? a.size() : b.size());
	else cout << "-1";
}