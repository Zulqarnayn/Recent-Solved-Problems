#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, l, st, en;

	cin >> n >> l;

	int light[n+2];
	st = 0, en = l;
	
	for(int i = 0; i < n; i++){
		cin >> light[i];
	}
	sort(light, light + n);

	double dist;

	for(int i = 0; i < n - 1; i++){
		if((light[i + 1] - light[i]) > dist)
			dist = (light[i + 1] - light[i]);
	}
	cerr << dist << endl;
	dist = dist / 2.0;

	if((light[0] - 0) > dist)
	dist = light[0] - 0;
	if((l - light[n-1]) > dist)
		dist = l - light[n - 1];

	printf("%.10lf\n", dist);
}