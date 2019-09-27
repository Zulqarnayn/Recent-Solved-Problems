#include <bits/stdc++.h>
using namespace std;

#define lld long long

int main()
{
	string num;
	cin >> num;

	if(num.size() == 1)
		return cout << 0, 0;
	
	lld sum = 0, count = 0;
	for(int i = 0; i < num.size(); i++){
		sum += (num[i] - '0');
	}
	count ++;

	while(sum / 10 > 0){
		cerr << "HELLO";
		lld temp = sum, tempS = 0;
		cerr << sum << endl;
		while(temp / 10 > 0){
			tempS += temp % 10;
			temp /= 10;
		}
		if(temp != 0)
			tempS += temp;
		cerr << tempS << endl;
		sum = tempS;
		count ++;
	}
	cout << count << endl;
}