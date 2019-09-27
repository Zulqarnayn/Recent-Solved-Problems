#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, b, d;
	cin >> n >> b >> d;
	int trash_count = 0, total = 0, a;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a <= b)
			total += a;
		if(total > d)
			total = 0, trash_count++;
	}
	cout << trash_count;
}