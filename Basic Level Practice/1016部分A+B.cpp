//#pragma warning(disable:4996)	
#include <cstdio>
#include<iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int a[2];
	int d[2];
	int hash[2] = {0};
	int p[2] = {0}, i;
	cin >> a[0] >> d[0] >> a[1] >> d[1];
	for (i = 0; i < 2; i++) {
		while (a[i] != 0) {
			if (a[i] % 10 == d[i]) hash[i]++;
			a[i] /= 10;
		 }
	}
	for (i = 0; i < 2; i++) {
		int j = 1;
		while (hash[i]-- > 0) {
			p[i] += j * d[i];
			j *= 10;
		}
	}
	cout << p[0] + p[1];
	system("pause");
	return 0;
}
