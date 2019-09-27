#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);

	for(int i = 0; i < a.size(); i++) {
		if(a[i] > b[i])
			return cout << "1\n", 0;
		else if(a[i] < b[i])
			return cout << "-1\n", 0;
	}

	cout << 0 << endl;
}