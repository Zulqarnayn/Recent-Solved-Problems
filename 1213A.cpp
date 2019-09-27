#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, evc = 0, odc = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x % 2 == 0){
			// cerr << x;
			evc++;
		}
		else 
			odc++;
	}
	cout << min (evc, odc) << "\n";
}