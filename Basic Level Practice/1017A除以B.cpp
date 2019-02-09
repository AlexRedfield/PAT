//#pragma warning(disable:4996)	

#include<iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int b;
	int q[1001];
	int r = 0;
	cin >> a >> b;

	int len = a.length();
	for (int i = 0; i < len; i++) {
		q[i] = (a[i] - '0' + r * 10) / b;
		r= (a[i] - '0' + r * 10) % b;
		if (a[0] - '0' < b&&i == 0&&len>1) continue;
		cout << q[i];
	}
	cout << " " << r;
	

	system("pause");
	return 0;
}
