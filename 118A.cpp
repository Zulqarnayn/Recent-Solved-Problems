#include <bits/stdc++.h>
using namespace std;

bool isVowel(char a){
	if(a == 'a') return 1;
	if(a == 'e') return 1;
	if(a == 'i') return 1;
	if(a == 'o') return 1;
	if(a == 'u') return 1;
	if(a == 'y') return 1;

	return 0;
}

bool upper(char a){
	if(a >= 'A' && a <= 'Z')
		return 1;
	return 0;
}


int main()
{
	string given_string, ans = "";
	cin >> given_string;
	for(int i = 0; i < given_string.size(); i++){
		if(upper(given_string[i])) 
			given_string[i] = 'a' + (given_string[i] - 'A');
		if(isVowel(given_string[i]))
			continue;
		else {
			ans += '.';
			ans += given_string[i];
		}
	}
	cout << ans << endl;
}