#include<stdio.h>
#include<string.h>
#define maxn 50
int main (void)
{
	int T;
	char s[50],min[50]={'0','0','0','0','0'};
	scanf ("%d",&T);
	while (T--) {
		scanf ("%s",s);
		if (strcmp(s,min)<0) {
			strcpy(min,s);
		}
	}
	printf ("%s",min);
} 
