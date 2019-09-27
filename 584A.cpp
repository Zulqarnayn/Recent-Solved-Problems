#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;

	if(t == 10 && n == 1)
		return cout << -1 , 0;
	else if(t == 10 && n > 1){
		cout << 1;
		for(int i = 0; i < n - 1; i++)
			cout << 0;
		return 0;
	}

	for(int i = 0; i < n; i++)
		cout << t ;

}