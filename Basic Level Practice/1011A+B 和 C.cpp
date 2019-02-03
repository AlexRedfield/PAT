#include <cstdio>
#include<iostream>
using namespace std;
int main() {
	int n=0, i;
	long long a, b, c;
	cin >> n;
	for (i = 1; i <= n; i++) {
		scanf("%ld %ld %ld", &a, &b, &c);
		printf("Case #%d: %s", i, a + b > c ? "true" : "false");
	}
	
	//system("pause");
	return 0;
}
