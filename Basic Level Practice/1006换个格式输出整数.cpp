#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,a=0,b=0,c;
	int i;
	cin >> n;
	c =n% 10;	//个位数
	
	if (n >= 10) {
		b = n / 10;
		if (n >= 100)
			{
				a = n / 100;				//百位数
				b = n / 10 % 10;		//十位数
				for (i = 0; i < a; i++)
					cout << "B";
			}
		for (i = 0; i < b; i++)
			cout << "S";
	}
	for (i = 1; i <= c; i++)
		cout << i;
	

	system("pause");
	return 0;
}