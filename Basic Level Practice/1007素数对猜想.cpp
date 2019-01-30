#include <cstdio>
#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n) {		//判定是否素数
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0) return false;
	return true;
}

int main() {
	int n,i;
	int a[10000], pNum = 0;
	int res=0;		//结果
	cin >> n;
	for(i=2;i<n;i++)
		if (isPrime(i)) {
			a[pNum++] = i;
		}

	for (i = 1; i < pNum; i++) {
		if (a[i] - a[i - 1] == 2) res++;
	}
	printf("%d", res);
	system("pause");
	return 0;
}
