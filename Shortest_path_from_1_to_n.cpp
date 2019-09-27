#include <iostream>
using namespace std;
#define INT_MAX (int) 1e9


int dp[10100];
int mn = INT_MAX, n;

int dfs(int val){
	if(val == 1 or val == 2 or val == 3) return 1;
	int ans = 0;
	if(val % 3 == 0) return ans = 1 + (dfs(val / 3));
	else return  ans = 1 + dfs(val - 1);
}

int main(){
	int t, ans;
	cin >> t;
	while(t--){
		cin >> n;
		mn = INT_MAX;
		for(int i = 0; i < 10100; i++)
			dp[i] = -1;
		ans = dfs(n);
		cout << ans << endl;
	}
}