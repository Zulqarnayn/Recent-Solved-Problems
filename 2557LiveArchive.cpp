#include <bits/stdc++.h>
using namespace std;

int precal[101];

void calc(){

	memset(precal, 0, sizeof(precal));

	for(int i = 1; i <= 100; i++){
		for(int j = i; j <= 100; j += i){
			precal[j] = precal[j] == 0 ? 1 : 0;
		}
	}
}

int main(){
	int tc;

	calc();

	scanf("%d", &tc);
	
	while(tc--){
		int n, count = 0;
		
		scanf("%d", &n);

		for(int i = 1; i <= n; i++){
			if(precal[i] == 1)
				count++;
		}
		printf("%d\n", count);
	}

}