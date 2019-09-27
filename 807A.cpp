#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int prv[n + 10], post[n + 10];

	for(int i = 0; i < n; i++){
		cin >> prv[i] >> post[i];		
	}

	for(int i = 0; i < n; i++){
		if(prv[i] != post[i])
			return cout <<"rated", 0;
	}

	for(int i = 0; i < n; i++){
		if(i < n - 1 && prv[i] < prv[i + 1])
			return cout << "unrated", 0;
	}
	cout << "maybe";
}