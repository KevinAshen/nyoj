#include<stdio.h>
int main (void)
{
	int i, j, n , m, a ,b=0;
	int s[1000],k[1000];
	for ( i = 0 ; i < 1000 ; i++ )
	{
		k[i]=0;
	}
	scanf ("%d",&n);
	for ( i = 0 ; i < n ; i++ ) 
	{
		scanf ("%d", &m);
		for ( j = 0; j < m ; j++ )
		{
			scanf ("%d",&s[j]);
			if (s[j]==1)
				continue;
			if (s[j]==2)
				k[b]+=s[j];
			else
				for ( a = 2 ; a < s[j]+1 ; a++) 
				{
					if (a == s[j])
						k[b]+=s[j];
					if (s[j]%a==0)
						break;
				}
		}
		b++;
	}
	for (i=0;i<n;i++)
	{
		printf ("%d\n",k[i]);
	}
} 
