#include <stdio.h>
#include<iostream>
int main() {

	int sum = 0,i=0;
	char str[101];
	int res[5], count = 0;
	char a[][9] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

	/*
	//gets_s(str);						//换行时结束
	//scanf_s("%s", str, 101);	//读取到空格结束

	for (i = 0; i < strlen(str); i++)
	{
		sum += str[i] - '0';
	}
	*/
	char n;
	while ((n = getchar()) != '\n'&&i < 101) {
		sum += n - '0';
		i++;
	}
	while (sum != 0)
	{
		res[count] = sum % 10;
		sum /= 10;
		count++;
	}
	for (int i = count - 1; i > 0; i--)
		printf("%s ", a[res[i]]);
	printf("%s", a[res[0]]);

	//system("pause");
	return 0;
}
