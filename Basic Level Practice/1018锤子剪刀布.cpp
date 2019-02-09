//#pragma warning(disable:4996)	

#include<iostream>
#include <string>
using namespace std;

/*以结果为导向的判断*/

int main() {
	int n;
	int c1, j1, b1, c2, j2, b2;
	c1= j1= b1= c2= j2=b2 = 0;
	int draw=0;
	char a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		switch (a) {
		case 'C': {
			if (b == 'J') c1++;
			else if (b == 'B') b2++; else draw++;  break;	
		}
		case 'J': {
			if (b == 'B') j1++;
			else if (b == 'C') c2++; else draw++;  break;
		}
		case 'B': {
			if (b == 'C') b1++;
			else if (b == 'J') j2++; else draw++;  break;
		}
		}
	}
	int count1 = b1 + c1 + j1;
	int count2 = b2 + c2 + j2;
	printf("%d %d %d", count1, draw, count2);
	printf("\n%d %d %d\n", count2, draw, count1);

	if (b1 >= c1 && b1 >= j1) printf("B ");
	if (c1 > b1&&c1 >= j1)printf("C ");
	if (j1 > b1&&j1 > c1)printf("J ");
	if (b2 >= c2 && b2 >= j2) printf("B");
	if (c2 > b2&&c2 >= j2)printf("C");
	if (j2 > b2&&j2 > c2)printf("J");


	system("pause");
	return 0;
}
