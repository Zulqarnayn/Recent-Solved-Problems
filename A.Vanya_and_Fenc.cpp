#include <bits/stdc++.h>
using namespace std;


int n, h;
int ar[2000];
int main(){
	cin >> n >> h;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> ar[i];
		if(ar[i] > h)
			cnt += 2;
		else cnt += 1;
	}
	cout << cnt << endl;
}