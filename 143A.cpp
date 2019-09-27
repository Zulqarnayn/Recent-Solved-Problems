#include <bits/stdc++.h>
using namespace std;

int main(){
	int r1, r2, c1, c2, d1, d2;
	int a11, a12, a21, a22;

	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	int mn = min( min( min(r1, r2) , min(c1, c2) ), min(d1, d2) );

	cerr << mn << endl;

	if(mn == r1 || mn == r2){
		//c1, c2
		for(int i = 1; i < mn; i++){
			if(r1 == mn){
				a11 = i;
				a12 = mn - i;

				a21 = c1 - a11;
				a22 = c2 - a12;

				if(a21 > 9 || a22 > 9 || a21 < 1 || a22 < 0) continue;
			} 
			else {
				a21 = i;
				a22 = mn - i;

				a11 = c1 - a21;
				a12 = c2 - a22;

				if(a11 > 9 || a12 > 9 || a11 < 0 || a12 < 0) continue;
			}

			if(a11 == a12 || a11 == a21 || a11 == a22 || a12 == a21 || a12 == a22 || a21 == a22) continue;
			cerr << a11 << ' ' << a12 << ' ' << a21 << ' ' << a22 << endl;
			if((a11 + a12 == r1) && (a21 + a22 == r2)){
				// printf("passed 1\n");
				cerr << c1 <<" ** " << a11 + a12 << ' ' << c2 << " ** " << a21 + a22 << endl;
				if((a11 + a21 == c1 ) && (a12 + a22 == c2)){
					// printf("passed 2\n");
					if((a11 + a22 == d1) && (a21 + a12 == d2)){
						// printf("passed 3\n");
						return printf("%d %d\n%d %d\n", a11, a12, a21, a22), 0;
					}
				}
			}
		}
	} 
	else if(mn == c1 || mn == c2){
		for(int i = 1; i < mn; i++){
			if(c1 == mn){
				a11 = i;
				a21 = mn - i;

				a12 = r1 - a11;
				a22 = r2 - a21;

				if(a12 > 9 || a22 > 9 || a12 < 1 || a22 < 1) continue;
			} 
			else {
				a12 = i;
				a22 = mn - i;

				a11 = r1 - a12;
				a21 = r2 - a22;
				if(a11 > 9 || a21 > 9  || a11 < 1 || a21 < 1) continue;
			}
			if(a11 == a12 || a11 == a21 || a11 == a22 || a12 == a21 || a12 == a22 || a21 == a22) continue;

			cerr << a11 << ' ' << a12 << ' ' << a21 << ' ' << a22 << endl;
			if((a11 + a12 == r1) && (a21 + a22 == r2)){
				// printf("passed 1\n");
				cerr << c1 <<" ** " << a11 + a12 << ' ' << c2 << " ** " << a21 + a22 << endl;
				if((a11 + a21 == c1 ) && (a12 + a22 == c2)){
					// printf("passed 2\n");
					if((a11 + a22 == d1) && (a21 + a12 == d2)){
						// printf("passed 3\n");
						return printf("%d %d\n%d %d\n", a11, a12, a21, a22), 0;
					}
				}
			}
		}
	}
	else {
		for(int i = 1; i < mn; i++){
			if(d1 == mn){
				a11 = i;
				a22 = mn - i;

				a21 = r2 - a22;
				a12 = r1 - a11;

				if(a21 > 9 || a12 > 9 || a21 < 1 || a12 < 1) continue;
			} 
			else {
				a12 = i;
				a21 = mn - i;

				a11 = r1 - a12;
				a22 = r2 - a21;

				if(a11 > 9 || a22 > 9 || a11 < 1 || a22 < 1) continue;
			}
			cerr << a11 << ' ' << a12 << ' ' << a21 << ' ' << a22 << endl;

			if(a11 == a12 || a11 == a21 || a11 == a22 || a12 == a21 || a12 == a22 || a21 == a22) continue;

			if((a11 + a12 == r1) && (a21 + a22 == r2)){
				// printf("passed 1\n");
				cerr << c1 <<" ** " << a11 + a12 << ' ' << c2 << " ** " << a21 + a22 << endl;
				if((a11 + a21 == c1 ) && (a12 + a22 == c2)){
					// printf("passed 2\n");
					if((a11 + a22 == d1) && (a21 + a12 == d2)){
						// printf("passed 3\n");
						return printf("%d %d\n%d %d\n", a11, a12, a21, a22), 0;
					}
				}
			}
		}
	}

	printf("-1\n");
}