//#pragma warning(disable:4996)	

#include<iostream>
#include <algorithm>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

/*循环时记得清零*/

int main() {
	//cout << setw(3) << setfill('0') << a << endl;

	/*提取每位数后排序
	int n;
	cin >> n;
	int m[2] = {0};
	int a[2][4] = { 0 };
	int flag = 0;
	do{

		for (int i = 0; i < 4; i++) {
			a[0][i] = n % 10;
			n /= 10;
		}
		for (int i = 0; i < 4; i++) a[1][i] = a[0][i];
		sort(a[0], a[0] + 4, greater<int>());	//max
		sort(a[1], a[1] + 4);		//min

		m[0] = m[1] = 0;
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 4; j++) {
				m[i] += a[i][j] * pow(10, 3 - j);			
			}
		n = m[0] - m[1];
		if (flag++ != 0) cout << endl;
		//cout << setw(4) << setfill('0') << m[0] 
		printf("%04d - %04d = %04d", m[0], m[1], n);

	} while (n != 6174 && n != 0);
	*/

	//使用字符串排序
	string s;
	cin >> s;
	s.insert(s.begin(), 4 - s.length(), '0');
	do {
		string a = s, b = s;
		sort(a.begin(), a.end(), greater<char>());
		sort(b.begin(), b.end());
		int res = stoi(a) - stoi(b);	//stoi(str)将字符串变成整形
		s = to_string(res);		//to_string(num)将整形变成字符串
		s.insert(s.begin(), 4 - s.length(), '0');
		cout << a << " - " << b << " = " << s << endl;
	} while (s != "6174"&&s != "0000");


	system("pause");
	return 0;
}
