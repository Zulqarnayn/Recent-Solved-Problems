#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	char photo;
	vector <char> colors;
	int color_mark[27];

	memset(color_mark, 0, sizeof(color_mark));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf(" %c", &photo);
			if(color_mark[photo - 'A'] == 0){
				color_mark[photo - 'A'] = 1;
				colors.push_back(photo);
			}
		}		
	}
	cerr << colors.size();
	for(auto i: colors){
		cerr << i << '\n';
	}

	if(colors.size() > 3) return cout << "#Color", 0;
	else {
		for(auto i: colors){
			if(i == 'C' || i == 'M' || i == 'Y')
				return cout << "#Color", 0;
		}
	}
	cout << "#Black&White";


}