#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, n;
	cin >> n >> k;
	int height[2*n + 2];
	for(int i = 0; i < (2 * n  + 1); i++){
		cin >> height[i];
	}

	for(int i = 1; i < 2 * n; i+=2){
		if(k){
			if(((height[i - 1] + 1) < height[i])  && ((height[i + 1] + 1) < height[i])){
				height[i] -= 1;
				k--;
			}
		}
	}
	for(int i = 0; i < 2 * n + 1; i++)
		cout << height[i] << ' ';
}