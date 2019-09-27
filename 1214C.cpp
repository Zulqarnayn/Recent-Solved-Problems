#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string seq;
	cin >> seq;
	int total = 0;
	bool fool = false;

	for(int i = 0; i < n; i++){
		if(seq[i] == '('){
			total += 1;
		}
		else if(seq[i] == ')'){
			total -= 1;
			if(total <= -2)
				fool = true;
		}
	}
	if(total != 0 || fool == true)
		cout << "No";
	else cout << "Yes";
}