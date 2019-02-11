//#pragma warning(disable:4996)	

#include<iostream>
#include <algorithm>
using namespace std;

/*
注意int/int时要加double(),否则不会保留小数点
*/

struct mooncake {
	double total_price, stock; 
	double retail_price;
};

bool cmp(mooncake a, mooncake b) {
	return a.retail_price > b.retail_price;
}

int main() {
	int n, d;		//分别为月饼的种类数和市场最大需求量
	double res=0;		//最大收益
	int num;
	int i;
	cin >> n >> d;
	mooncake m[1000];
	for (i = 0; i < n; i++) {
		cin >> m[i].stock;
	}
	for (i = 0; i < n; i++) {
		cin >> m[i].total_price;
		m[i].retail_price = double(m[i].total_price) / double(m[i].stock);
	}
	sort(m, m + n, cmp);
	/*
	for (i = 0; i < n; i++) {
		cout << m[i].retail_price <<endl;
	}
	*/
	for (i = 0; i < n && d>0; i++) {
		if (d - m[i].stock >= 0) res += m[i].total_price;
		else res += m[i].total_price*d / m[i].stock;
		d -= m[i].stock;
	}
	printf("%.2f", res);

	system("pause");
	return 0;
}
