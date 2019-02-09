//#pragma warning(disable:4996)	
#include <cstdio>
#include<iostream>
using namespace std;
int main() {
	int n, i,x,flag=1;
	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	int f2 = 0;		//用于判断是否存在满足条件2的值
	int num = 0;
	double a4 = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x;
		if (x % 10 == 0)
			a1 += x;
		if (x % 5 == 1) {
			a2 += x * flag;
			flag *= -1;
			f2++;
		}
		if (x % 5 == 2) a3++;
		if (x % 5 == 3) {
			a4 += x;
			num++;
		}
		if (x % 5 == 4) {
			if (x >= a5) a5 = x;
		}
	}
	if (a1 != 0) printf("%d ", a1); else printf("N ");
	if (f2 != 0) printf("%d ", a2); else printf("N ");
	if (a3 != 0) printf("%d ", a3); else printf("N ");
	if (a4 != 0) printf("%.1f ", a4/num); else printf("N ");
	if (a5 != 0) printf("%d", a5); else printf("N");
	system("pause");
	return 0;
}
