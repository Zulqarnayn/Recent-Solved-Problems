#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number;
	string stones;
	cin >> number >> stones;

	int minL = 0, minR = 0;
	for(int i = 0; i < number - 1; i++){
		if(stones[i] == stones[i+1]){
			minL++;
		}
	}

	for(int i = number - 1; i > 0; i--){
		if(stones[i] == stones[i-1]){
			minR++;
		}
	}
	cout << min
	(minL, minR) << "\n";
}