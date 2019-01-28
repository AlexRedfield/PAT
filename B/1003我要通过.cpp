#include <stdio.h>
#include <iostream>

bool judge(char *str,int n) {
	int a = 0, b = 0, c = 0;		//P左边的A，P和T之间的A，T右边的A
	int i = 0;
	while (str[i] != 'P'&&i < n) {		
		if (str[i] != 'A')  return false;
		i++;
		a++;
		//printf("1");
	}
	i++;
	if (i >= n) return false;
	if (str[i] != 'A')  return false;
	while (str[i] != 'T'&&i < n) {	
		if (str[i] != 'A')  return false;
		i++;
		b++;
		//printf("2");
	}
	i++;	
	if (i > n) return false;
	if (i == n) return true;
	for (; i < n; i++) {
		if (str[i] != 'A')  return false;
		c++;
		//printf("3");
	}
	if(a*(b+1)==a+c)
		return true;
	else return false;
}

int main() {
	
	int num = 0, i;
	char str[10][100];
	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%s", str[i]);

	for (i = 0; i < num; i++) {
		int len = strlen(str[i]);
		if (judge(str[i], len)) printf("YES");
		else printf("NO");
		if (i != num - 1) printf("\n");
	}
/*	
	char str[10]="PAT";
	int len = strlen(str);
	if (judge(str, len)) printf("true");
*/	

	return 0;
}