#include<stdio.h>
#define PEO 105 
int main (void)
{
	//第一行输入数据n，表示测试数据组数(0<N<100),
	//每组测试数据输入的第一行是一个整数x（1 <= X <= 100），
	//表示学生的总数。
	//需要储存姓名 两个成绩 两个字符串 一个论文数
	//五个if语句判断5个奖项
	//比较每个学生奖金（用数组），找出最大，输出对应字符串
	//用sum储存总奖金，所有学生 
	int n,x,qimo,pingyi,lun,sum,zuida,max;
	int i,j,i1,j1,t,t1;//中间变量 
	int jiang[PEO]; 
	char gan,xi;
	char name[PEO][PEO];
	scanf ("%d ",&n);
	for (t1=0;t1<n;t1++) {
		sum=0;
		for (i=0;i<PEO;i++) {
			jiang[i]=0;
		}
		scanf ("%d",&x);
		for (j=0;j<x;j++) {
			scanf ("%s %d %d %c %c %d",name[j],&qimo,&pingyi,&gan,&xi,&lun);
			//printf ("%d %d",qimo,pingyi);
			if (qimo>80&&lun>0) {
				jiang[j]+=8000;
				sum+=8000; 
			}
			if (qimo>85&&pingyi>80) {
				jiang[j]+=4000;
				sum+=4000;
			}
			if (qimo>90) {
				jiang[j]+=2000;
				sum+=2000;
			}
			if (qimo>85&&xi=='Y') {
				jiang[j]+=1000;
				sum+=1000;
			}
			if (pingyi>80&&gan=='Y') {
				jiang[j]+=850;
				sum+=850;
			}
		}
		max=-1;
		zuida=-1;
		//奖金排序？？ 不能排序,用遍历法 找出最大下标 
		for (i1=0;i1<x;i1++) {
			if (max<jiang[i1]) {
				max=jiang[i1];
				zuida=i1;
			}
		}
		printf ("%s\n",name[zuida]);
		printf ("%d\n",jiang[zuida]);
		printf ("%d\n",sum); 
	} 
} 
