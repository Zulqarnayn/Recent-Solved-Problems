#include <bits/stdc++.h>
using namespace std;

int prime[50], cnt;

void find_prime(){
	for(int i = 2; i < 51; i++){
		bool fool = false;
		for(int j = 2; j < i - 1; j++){
			if(i % j == 0){
				fool = true;
				break;
			}
		}
		if(fool == false){
			prime[cnt++] = i;
		}
	}
}

int main()
{
	int n, m;

	find_prime();
	cin >> n >> m;
	for(int i = 0; i < cnt; i++){
		if(prime[i] == n){
			if(i + 1 < cnt && prime[i+1] == m)
				return cout <<"YES", 0;
			else 
				return cout <<"NO", 0;
		}
	}
	cout <<"NO";
}