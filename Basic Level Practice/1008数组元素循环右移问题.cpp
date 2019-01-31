/*
思路：先将数组前n-m位倒置，再将后m位倒置，最后将整个数组倒置
难点：m>n的情况
*/
#include <cstdio>
#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void reverse(int a[], int k) {
	/*
	void reverse(int *a, int n)
	for (int i = 0; i < n / 2; i++) {
		t = *(a + n - i - 1);
		*(a + n - i - 1) = *(a+i);
		*(a+i) = t;
	}*/
	int t;
	for (int i = 0; i < k / 2; i++) {
		t = a[k - i - 1];
		a[k - i - 1] = a[i];
		a[i] = t;
	}
}

int main() {
	int n,m,i;		//将n个数字循环右移m位
	int res[110];
	cin >> n >> m;
	m = m % n;
	for (i = 0; i < n; i++)
		cin >> res[i];
	reverse(res, n - m);
	reverse(res + n - m, m);
	reverse(res, n);
	for (i = 0; i < n; i++) {
		cout << res[i];
		if (i != n - 1) cout << " ";
	}


	system("pause");
	return 0;
}
