#include<stdio.h>
int fun (int k);
int main (void)
{ 
	//���� n��n���������ݣ���С1�� 
	//�����ж��Լ��ǲ������� and 1����� 
	//�������ߵ��������ú���ģ���ж���������������ұߵģ����бȽϳ��� 
	//��������������a��b����������������루������ȥ����
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
