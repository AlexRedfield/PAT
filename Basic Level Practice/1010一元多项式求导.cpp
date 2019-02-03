#include <cstdio>
int main(){
	int a,b;
	int flag = 0;
	/*
	for (i = 0; ; i++)
	{
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
		n++;        //统计输入了多少个数
		s = getchar();   //判断回车结束符
		if (s == '\n')
			break;
	}
	*/

	while(scanf("%d %d",&a,&b)!=EOF){
		if(b!=0){
			if(flag++ != 0)printf(" ");
			printf("%d %d",a*b,b-1);
		}
	}
	if(flag==0)printf("0 0");
	return 0;
} 
