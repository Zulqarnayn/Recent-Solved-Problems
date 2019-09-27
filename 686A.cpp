#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, x, count = 0, disheart = 0;
	char sign;
	cin >> n >> x;
	count += x;
	for(int i = 0; i < n; i++){
		cin >> sign;
		cin >> x; 
		if(sign == '+')
			count += x;
		else {
			if(x <= count)
				count -= x;
			else disheart++;
		}

	}
	cout << count << ' ' << disheart << '\n';
}