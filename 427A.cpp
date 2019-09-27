#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numberOfEvents;
	cin >> numberOfEvents;
	int events[numberOfEvents + 10];
	for(int i = 0; i < numberOfEvents; i++)
		cin >> events[i];

	int current = 0, sum = 0;
	for(int i = 0; i < numberOfEvents; i++){
		current += events[i];

		if(current < 0) {
			sum ++;
			current = 0;
		}
	}
	cout << sum << "\n";
}