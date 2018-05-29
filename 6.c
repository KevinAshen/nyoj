#include<stdio.h>
int fun (int k);
int main (void)
{ 
	//输入 n，n个测试数据（最小1） 
	//优先判断自己是不是素数 and 1的情况 
	//先算出左边的素数（用函数模块判断素数），再算出右边的，进行比较长度 
	//还是用两个数组a，b来存放最近素数与距离（素数减去自身）
	int n,i,j,t,o,q,e;
	int a[1000],b[1000],s[1000];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf ("%d",&s[i]);
	for (i=0;i<n;i++)
	{
		t=0;
		o=0;
		if (fun(s[i])==1)
			{
				a[i]=s[i];
				b[i]=0;
				continue;
			}
		if (s[i]==1)
		{
			s[i]=2;
			b[i]=1;
			continue;
		}
		q=s[i];
		e=s[i];
		while(fun(--q)==1)
			t++;
		while(fun(++e)==1)
			o++;
		if (t>=o)
			{
				a[i]=s[i]-t;
				b[i]=t;
			}
		else
			{
				a[i]=s[i]+o;
				b[i]=o;
			}
	}
	for (i=0;i<n;i++)
	{
		printf ("%d %d\n",a[i],b[i]);
	}
	 
}
int fun (int k)
{
	int i,t=1;
	for (i=2;i<k+1;i++)
	{
		if (i==k)
			t=0;
		if (k%i==0)
			break;
	}
	if (t==1)
		return 0;
	else
		return 1;
}
