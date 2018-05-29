#include<stdio.h>
#include<string.h>
#define con 0.05
int main (void)
{
	//输入T组测试数据 M条命令
	//设置计数器counter 计算第几层
	//有几层就将s乘以几个con
	//将最后加起来 乘个60 ojbk 
	int T,M,s,sum;
	int counter,counter1,flag;
	char order[50];
	scanf ("%d",&T);
	while (T--) {
		counter=0;
		sum=0;
		scanf ("%d",&M);
		while (M--) {
			flag=0;
			scanf ("%s",order);
			if (strcmp(order,"IN")==0) {
				counter++;
			} else if (strcmp(order,"OUT")==0) {
				counter--;
			} else {
				scanf("%d",&s);
				s*=60;
				flag=1;
			}
			//printf ("%d\n",s);
			if (flag==1) {
				counter1=counter;
				while(counter1--) {
					s*=con; 
				}
				sum+=s;
				//printf ("%d %d\n",s,sum);
			}
		}
		printf ("%d\n",sum);
	} 
}
