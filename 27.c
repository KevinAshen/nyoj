#include<stdio.h>
int main (void)
{
	int n,judge;
	scanf ("%d",&n);
	while(n--) {
		scanf ("%d",&judge);
		switch (judge/10) {
			case 10:printf ("A\n");break;
			case 9:printf ("A\n");break;
			case 8:printf ("B\n");break;
			case 7:printf ("C\n");break;
			case 6:printf ("D\n");break;
			default :printf ("E\n");break;
		}
	}
}
