#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
	int len = a.size() > b.size() ? a.size() : b.size();
	if(a.size() != b.size()){
		int diff = abs((int)a.size() - (int)b.size());
		string rem;
		// cerr << diff << '\n';
		while(diff--) rem += '0';
		if(a.size() != len)
			a = rem + a;
		else b = rem + b;
		// cerr << a << " ^ " << b << '\n';
	}

	string total = "";
	int rem = 0, sum = 0;
	for(int i = len - 1; i >= 0; i--){
		int n1 = a[i] - '0';
		int n2 = b[i] - '0';

		sum = n1 + n2;
		sum += rem;
		// cerr << sum << " - " << rem << '\n';
		rem = sum / 10;
		sum = sum % 10;
		total += (sum + '0');
	}
	if(rem > 0) total += (rem + '0');
	// cerr << sum << " - " << rem << endl;
	reverse(total.begin(), total.end());
	return total;
}

string subTask (string a, char b){
	int rem = 0;
	string sum = "";
	int n1, n2 = b - '0', tot = 0;
	for(int i = a.size() - 1; i >= 0 ; i--){
		n1 = a[i] - '0';
		tot = n1 * n2;
		tot += rem;

		rem = tot / 10;
		tot = tot % 10;
		sum += (tot + '0');
	}
	if(rem >= 0) sum += (rem + '0');
	reverse(sum.begin(), sum.end());
	// cerr << sum << '\n';
	return sum;
}

void multiply(string a, string b){
	string addAns = "0";
	for(int i = b.size() - 1; i >= 0; i--){
		string partialmult = subTask(a, b[i]);
		if(i != b.size() - 1){
			int totalZero = b.size() - 1 - i;
			while(totalZero--)
				partialmult += '0';
		}
		addAns = add(addAns, partialmult);
	}
	// cerr << addAns << endl;
	int p = 0;
	while(addAns[p] == '0')
		p++;
	for(int i = p; i < addAns.size(); i++){
		printf("%c", addAns[i]);
	}
	printf("\n");
}


int main()
{
	string num1, num2;
	while(cin >> num1 >> num2){

		if(num1 == "0" || num2 == "0"){
			printf("0\n");
			continue;
		}

		if(num1.size() >= num2.size()){
			multiply(num1, num2);
		}
		else 
			multiply(num2, num1);
	}
}
