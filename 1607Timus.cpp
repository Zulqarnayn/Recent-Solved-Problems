#include <cstdio>
using namespace std;

int main(){
	int a, c, b, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int t = 0;

	while(true){
		if(a + b * t >= c - d * t){
			return printf("%d\n", a + b * t), 0;
		}	
		else if(a + b * (t + 1) >= c - d * t){
			return printf("%d\n", c - d * t), 0;
		}
		t++;
	}
}