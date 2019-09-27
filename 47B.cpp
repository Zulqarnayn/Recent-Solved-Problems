#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b, c;
	int av, bv, cv;
	cin >> a >> b >> c;
	if(a[1] != '>')
	{
		a[1] = '>';
		swap(a[0], a[2]);
	}
	if(b[1] != '>')
	{
		b[1] = '>';
		swap(b[0], b[2]);
	}
	if(c[1] != '>')
	{
		c[1] = '>';
		swap(c[0], c[2]);
	}

	if(a[0] != b[0] && b[0] != c[0] && a[0] != c[0])
		return cout << "Impossible", 0;

	if(a[0] == b[0]){
		cout << c[2] << c[0] << b[0];
	}
	else if(a[0] == c[0]){
		cout << b[2] << b[0] << c[0];
	}
	else if(b[0] == c[0]){
		cout << a[2] << a[0] << b[0];
	}

}

// map <char,int> mp;
// 	mp[a[0]]++;
// 	mp[a[2]]++;
// 	mp[b[0]]++;
// 	mp[b[2]]++;
// 	int index = mp[a[0]] > mp[a[2]] ? 0 : 2;


// 	//same pos sign same
// 	if(a[index] == b[index]){
// 		if(a[1] == b[1]){
// 			if(index == 0 && a[1] == '>')
// 			{
// 				if(a[index] =='A') {av = 3; bv = 2; cv = 2;}
// 				else if(a[index] =='B') {bv = 3; av = 2; cv = 2;}
// 				else if(a[index] =='C') {cv = 3; bv = 2, av = 2;}
// 			}
// 			else if(index == 2 && a[1] =='>')
// 			{
// 				if(a[index] =='A') {av = 1; bv = 2; cv = 2;}
// 				else if(a[index] =='B') {bv = 1; av = 2; cv = 2;}
// 				else if(a[index] =='C') {cv = 1; bv = 2, av = 2;}
// 			}
// 			else if(index == 0 && a[1] =='<')
// 			{
// 				if(a[index] =='A') {av = 1; bv = 2; cv = 2;}
// 				else if(a[index] =='B') {bv = 1; av = 2; cv = 2;}
// 				else if(a[index] =='C') {cv = 1; bv = 2, av = 2;}
// 			}
// 			if(index == 2 && a[1] == '<')
// 			{
// 				if(a[index] =='A') {av = 3; bv = 2; cv = 2;}
// 				else if(a[index] =='B') {bv = 3; av = 2; cv = 2;}
// 				else if(a[index] =='C') {cv = 3; bv = 2, av = 2;}
// 			}

// 		}
// 	}