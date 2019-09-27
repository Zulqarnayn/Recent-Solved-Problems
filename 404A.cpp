#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string board[n + 2];
	int mark[27], cnt = 0;
	for(int i = 0; i < n; i++){
		cin >> board[i];
	}
	memset(mark, 0, sizeof(mark));
	bool fool = false;
	char topLeft = board[0][0];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int val = board[i][j] - 'a';
			if(mark[val] == 0){
				mark[val] = 1;
				cnt++;
			}
		}
	}

	cerr << cnt;

	if(cnt != 2)
		return cout << "NO", 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if((i == j) || (j == (n - i - 1))){
				if(board[i][j] != topLeft){
					fool = true;
					cerr << "First " << i <<' ' << j << endl;
					break;
				}
				
			}
			else if(board[i][j] == topLeft){
					fool = true;
					cerr << "Second " << i <<' ' << j << endl;
					break;
				}

		}
		if(fool == true) 
			break;

	}
	if(fool == true || cnt != 2)
		return cout << "NO", 0;

	cout << "YES";
	

}

// int j = (n - i) - 1;

// 		cerr << "i : " << i <<" j : " << j << endl;
// 		if(board[i][j] != topLeft){
// 			fool = true;
// 			break;
// 		}
// 		if(board[i][i] != topLeft){
// 			fool = true;
// 			break;
// 		}