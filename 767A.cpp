#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	int snake[n + 12], mark[n + 12];
	memset(mark, 0, sizeof(mark));
	//for(int i = 0; i < 10; i++) cerr << mark[i] << endl;
	int target = n;
	for(int i = 0; i < n; i++){
		cin >> snake[i];
	}
	int i = 0;
	while(i < n){
		if(snake[i] == target) {
			mark[target]++;
			printf("%d ", target);
			//target--;

			// printf("target Now : %d\n", target);
			while(mark[--target] == 1){
				printf("%d ", target);
				// target--;
			}
			printf("\n");
		}
		else {
			printf("\n");
			mark[snake[i]]++;
		}
		i++;
	}
	// for(int i = 1; i < 10; i++) cerr << mark[i] << endl;

}