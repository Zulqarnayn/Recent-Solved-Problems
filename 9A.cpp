#include <bits/stdc++.h>
using namespace std;

int main(){
	int n1, n2;
	cin >> n1 >> n2;
	int mx = n1 > n2 ? n1 : n2;
	int rem = 6 - mx + 1;
	int gcd = __gcd(rem, 6);

	int den = rem / gcd;
	int neu = 6 / gcd;

	cout << den << '/' << neu << endl;
}