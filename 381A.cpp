#include <bits/stdc++.h>
using namespace std;

int main() {
	int numberOfCards;
	int cards[1005];
	cin >> numberOfCards;
	for(int i = 0; i< numberOfCards; i++)
		cin >> cards[i];

	int left = 0, right = numberOfCards - 1, sereja = 0, dima = 0;
	bool turn = 1;

	while(left <= right) {
		if(turn){
			sereja += cards[left] > cards[right] ? cards[left++] : cards[right--];
		}
		else 
			dima += cards[left] > cards[right] ? cards[left++] : cards[right--];

		turn = 1 - turn;
	}

	cout << sereja << ' ' << dima << "\n";
}