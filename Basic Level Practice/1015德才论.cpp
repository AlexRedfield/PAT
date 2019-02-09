#pragma warning(disable:4996)	
#include <cstdio>
#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
using namespace std;

struct stu {
	int id, s1, s2;
};

bool cmp(stu a, stu b) {
	if (a.s1+a.s2!=b.s1+b.s2) return a.s1 + a.s2 > b.s1 + b.s2;
	else if (a.s1 != b.s1) return a.s1 > b.s1;
	else return a.id < b.id;
}

int main() {
	int n, l, h;
	int id, s1, s2;
	scanf("%d%d%d", &n, &l, &h);

	vector<stu> node[4];
	int count=0, priority;
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &id, &s1, &s2);

		if (s1 >= l && s2 >= l) {
			if (s1 >= h && s2 >= h)	priority = 0;
			else if (s1 >= h) priority = 1;
			else if (s1 < h&&s2 < h&&s1 >= s2) priority = 2;
			else priority = 3;
			node[priority].push_back(stu{ id, s1, s2 });
			count++;
		}		
	}

	cout << count;
	
	for (int i = 0; i < 4; i++) {
		sort(node[i].begin(), node[i].end(), cmp);
		for(int j=0;j< node[i].size();j++)
			printf("\n%d %d %d", node[i][j].id, node[i][j].s1, node[i][j].s2);
	}

	system("pause");
	return 0;
}
