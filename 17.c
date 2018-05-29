#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (void)
{
	//输入n，代表n组测试数据
	//用桶排序，把字母放入桶（0~25即a~z）
	//找出maxn,minn
	//检验cha是不是素数
	//输出
	int n,maxn,minn,cha;
	int i,j,i1,j1,flag;
	int tong[26];
	char danci[30];
	//scanf ("%d",&n);
		memset(tong,0,sizeof(tong));//桶数据清零
		maxn=0;
		minn=105;
		flag=0;
		/*for (j=0;j<26;j++) {
			printf ("%d ",tong[j]);
		}*/
		scanf ("%s",danci);
		getchar();
		for (j=0;j<strlen(danci);j++) {//sizeof统计空间，strlen统计实际字节数 
			tong[danci[j]-'a']++;
		}
		/*for (j=0;j<26;j++) {
			printf ("%d ",tong[j]);
		}*/
		for(i=0;i<26;i++) {
			if (tong[i]!=0) {//0说明没这个单词 不用考虑 
				if (maxn<tong[i]) {
					maxn=tong[i];
				}
				if (minn>tong[i]) {
					minn=tong[i];
				}
			}
		}
		cha=maxn-minn;
		//printf ("%d %d %d",cha,maxn,minn);
		if (cha==0||cha==1) {
			;
		} else {
			for (j1=2;j1<cha+1;j1++) {
				if (j1==cha) {
					flag=1;
					break;
				}
				if (cha%j1==0) {
					break;
				}
			}
		} 
		if (flag==0) {
			printf ("No Answer\n0\n");
		} else {
			printf ("Lucky Word\n%d\n",cha);
		} 
	return 0; 
} 
