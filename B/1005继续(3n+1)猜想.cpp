#pragma warning(disable:4996)
#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
	int k,n,i;
	int a[110] = { 0 };
	int hash[10000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
		k= a[i];
		if (hash[k] == 1) continue;	//如在前面过程中已经出现覆盖过一次，直接跳过
		while (k != 1) {
			if (k % 2 == 0)
				k /= 2;
			else k = (k * 3 + 1)/2;
			hash[k] = 1;
		}
	}
	sort(a, a + n);

	int num=0;
	for (i = n - 1; i >= 0; i--) {
		if (!hash[a[i]]) {
			if (num) cout << " ";	   //不能判断哪个是最后就先输入空格再输入数字
			cout << a[i];
			num++;
		}
	}
	//system("pause");
	return 0;
}
