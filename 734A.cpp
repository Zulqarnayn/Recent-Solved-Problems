#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	string x;
	cin >> n >> x;
	int cntA = 0, cntD = 0;
	for(int i = 0; i < n; i++){
		if(x[i] == 'D')
			cntD++;
		else cntA++;
	}
	cout << (cntD >= cntA ? (cntD == cntA ? "Friendship" : " Danik") :"Anton");

}