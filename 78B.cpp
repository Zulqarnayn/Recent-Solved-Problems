#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char ar[4];
	ar[0] = 'R';
	ar[1] = 'O';
	ar[2] = 'Y';
	ar[3] = 'G';

	for(int i = 0; i < n - 3; i++){
		cout << ar[i % 4];
	}
	cout << "BIV";
}