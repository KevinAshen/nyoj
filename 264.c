#include<stdio.h>
#include<string.h>
#define maxn 105
int main (void)
{
	int N,len;
	int i,j,flag;
	char s[maxn],s1[maxn];
	scanf ("%d",&N);
	while (N--) {
		scanf ("%s",s);
		while (1) {
			flag=1;
			len=strlen(s);
			if (len%2!=0) {
				strcpy(s1,s);
				flag=0;
				break;
			}
			//printf ("21321\n");
			i=0;
			j=len-1;
			for (i=0;i<len/2;i++) {
				if (s[i]==s[j]) {
					j--;
				} else {
					flag=0;
					//printf ("$$$\n");
					break;
				}
			}
			//printf ("21321\n");
			if (flag==0) {
				strcpy(s1,s);
				break;	
			}
			s[len/2]='\0';
			len=strlen(s);
			//printf ("%s&&\n",s1);
		}
		//printf ("%s\n",s1);
		len=strlen(s1);
		printf ("%d\n",len);
	}
}
