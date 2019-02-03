#include<iostream>
#include<cstdio>
#include<cstring>

int main(){
    char str[90];
	gets_s(str);
	int length = strlen(str);
	char ans[90][90] = { 0 };
	int num = 0, len = 0;	//分别为单词个数，单个单词长度
	for (int i = 0; i < length; i++) {
		if (str[i] != ' ') {
			ans[num][len++] = str[i];
		}
		else {
			ans[num][len] = '\0';
			num++;
			len = 0;
		}
	}
	//逆序输出每个单词
	for (int i = num; i >= 0; i--) {
		printf("%s", ans[i]);
		if (i != 0) printf(" ");
	}

	/*
//读入数据
	char str[100];
	fgets(str, 99, stdin);
	//定义数组长度及单词首尾变量
	int length = strlen(str) - 1;
	int begin = 0, end = length - 1;
	//倒序遍历
	for (int i = end; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			//单词开始为空格后一位
			begin = i + 1;
			//循环输出该单词
			for (int j = begin; j <= end; j++)
			{
				printf("%c", str[j]);
			}
			printf(" ");
			//单词末尾为空格前一位
			end = i - 1;
		}
	}
	//输出第一个单词
	for (int i = 0; i <= end; i++)
	{
		printf("%c", str[i]);
	}
	*/
    return 0;
}