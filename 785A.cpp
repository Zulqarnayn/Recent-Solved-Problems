#include <bits/stdc++.h>
using namespace std;

int val (char a){
	if(a == 'T') return 4;
	if(a == 'C') return 6;
	if(a == 'O') return 8;
	if(a == 'D') return 12;
	if(a == 'I') return 20;
}

int main(){
	int n;
	long long int sum = 0;
	cin >> n;
	string polygon;
	for(int i = 0; i < n; i++){
		cin >> polygon;
		sum += val(polygon[0]);
	}
	cout << sum << endl;
}