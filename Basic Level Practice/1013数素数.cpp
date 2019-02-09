//#pragma warning(disable:4996)	
#include <cstdio>
#include<iostream>
#include <cmath>
#include<vector>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int i=1;
	unsigned int  m, n;
	int num = 0;
	vector<int> p;
	cin>> n>>m;

    //将所求的数压入数组
	while (p.size() != m) {
		i++;
		if (!isPrime(i)) continue;
		p.push_back(i);
	}

    //按要求格式输出
	for (i = n - 1; i < m; i++)
	{
		num++;
		if (i == m - 1) printf("%d", p[i]);
		else {
			if (num % 10 == 0) printf("%d\n", p[i]);
			else printf("%d ", p[i]);
		}
	}


	system("pause");
	return 0;
}
