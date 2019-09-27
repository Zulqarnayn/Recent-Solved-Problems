#include <bits/stdc++.h>
using namespace std;

int main(){

	string sequence, instruction;
	int currentPos = 0;

	cin >> sequence >> instruction;

	for(int i = 0; i < instruction.size(); i++){
		if(instruction[i] == sequence[currentPos])
			currentPos++;
	}
	cout << currentPos + 1;
}