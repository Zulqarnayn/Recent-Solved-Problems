#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	vector <string > v, ans, sol;
	v.insert(v.end(), {"abc", "acb", "bac", "bca", "cab", "cba"});

	for(auto i: v){
		if((i.find(s) != std::string::npos) || (i.find(t) != std::string::npos)){
			// v.erase(remove(v.begin(), v.end(), i) , v.end());
			cerr << "pf " << i << endl;
		}
		else {
			ans.push_back(i);
		}
	}
	cerr << ans.size() << endl;

	for(auto i: ans){
		string p = i + i[0];
		if((p.find(s) != std::string::npos) || (p.find(t) != std::string::npos)){
			cerr <<" f " << i << endl;
 		}
		else{
			sol.push_back(i);
			cerr << "FFF " << i << endl;
		}
	}
	cout << "YES" <<endl;
	if(sol.size() != 0){
		string loop = sol[0];
		
		for(int i = 0; i < n; i++)
			cout << loop;
	}else {
		char ch;
		if(s[0] == t[0]){
			ch = s[0];
			if(ch == 'a'){
				for(int i = 0; i < n; i++)
					cout << 'b';
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'a';
			}
			else if(ch == 'b'){
				for(int i = 0; i < n; i++)
					cout << 'a';
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'b';
			}
			else if(ch == 'c'){
				for(int i = 0; i < n; i++)
					cout << 'b';
				for(int i = 0; i < n; i++)
					cout << 'a';
				for(int i = 0; i < n; i++)
					cout << 'c';
			}
		}
		else if(s[1] == t[1]){
			ch = s[1];
			if(ch == 'a'){
				for(int i = 0; i < n; i++)
					cout << 'a';
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'b';
			}
			else if(ch == 'b'){
				for(int i = 0; i < n; i++)
					cout << 'b';
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'a';
			}
			else if(ch == 'c'){
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'a';
				for(int i = 0; i < n; i++)
					cout << 'b';
			}
		}
		else if(s[0] == t[1] && s[1] == t[0]){
			if(s[0] != 'a' && s[1] !=  'a'){
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'a';
				for(int i = 0; i < n; i++)
					cout << 'b';
			}
			else if(s[0] != 'b' && s[1] !=  'b'){
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'b';
				for(int i = 0; i < n; i++)
					cout << 'a';
			}
			else if(s[0] != 'c' && s[1] !=  'c'){
				for(int i = 0; i < n; i++)
					cout << 'a';
				for(int i = 0; i < n; i++)
					cout << 'c';
				for(int i = 0; i < n; i++)
					cout << 'b';
			}
		}
	}

}