#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	set <int> st;

	int temp = k;
	while(k <= d){
		st.insert(k);
		k += temp;
	}

	temp = l;
	while(l <= d){
		st.insert(l);
		l += temp;
	}

	temp = m;
	while(m <= d){
		st.insert(m);
		m += temp;
	}

	temp = n;
	while(n <= d){
		st.insert(n);
		n += temp;
	}

	cout << st.size() << endl;
}