#pragma warning(disable:4996)
#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

struct Student {
	char name[15];
	char id[15];
	int score;
}stu[10010];

bool cmp(Student a, Student b) {
	return a.score < b.score;
}
 
int main() {
	int n,i=0;
	scanf("%d", &n);
	
	//printf("%s %s", stu[0].name, stu[0].id);
	for (i = 0; i < n; i++) {
		scanf("%s %s %d", stu[i].name, stu[i].id, &stu[i].score);
	}
	for (i = 0; i < n; i++) {
		printf("%s\n", stu[i].id);
	}
	sort(stu, stu + n, cmp);

	//system("pause");
	return 0;
}