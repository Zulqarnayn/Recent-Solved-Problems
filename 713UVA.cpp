#include <bits/stdc++.h>
using namespace std;

string equal (string str, int size){
	int rem = size - str.size() > 0 ? size - str.size(): 0;

	string temp = "";
	while(rem--){
		temp += '0';
	}

	str = temp + str;

	return str;
}

string reverse_str(string str){
	
	bool fool = 0;
	string temp = "";

	for(int i = str.size() - 1; i >= 0; i--){
		if(str[i] != '0'){
			fool = 1;
		}
		if(fool == 0)
			continue;
		else 
			temp += str[i];

	}
	
	return temp;
}

string add(string a, string b){

	int mxSize = max(a.size(), b.size());

	a = equal(a, mxSize);
	b = equal(b, mxSize);

	string sol = "";

	int rem = 0, ldig;
	for(int i = a.size() - 1; i >= 0; i--){
		int la = (a[i] - '0');
		int lb = (b[i] - '0');
		rem = la + lb + rem;

		ldig = rem % 10;
		rem /= 10;
		sol += (ldig + '0');
	}

	if(rem)
		sol += (rem + '0');
	return sol;

}

string remove_extra(string str){
	bool fool = 0;
	string temp = "";

	for(int i = 0; i <= str.size(); i++){
		if(str[i] != '0'){
			fool = 1;
		}
		if(fool == 0)
			continue;
		else 
			temp += str[i];

	}

	if(temp[0] == '\0')
		temp = "0";
	
	return temp;
}

int main(){

	int n;
	scanf("%d", &n);
	string a, b, ans;

	for(int i = 0; i < n; i++){
		cin >> a >> b;
		a = reverse_str(a);
		b = reverse_str(b);

		ans = add(a, b);
		ans = remove_extra(ans);
		for(int i = 0; i < ans.size() - 1; i++)
			cout <<  ans[i];
		cout << "\n";
	}

}