#include<stdio.h>
#include<string.h>
#define maxn 15 
int main (void)
{
	//输入T行 输入page（字符串）
	//从右到左处理 相应的英文（switch）
	//在一行输出完后输出换行符
	int T,ger;
	int len,pg,len1;
	char page[maxn];
	scanf ("%d",&T);
	while(T--) {
		scanf ("%s",page);
		len=strlen(page);
		//printf ("%d",len);
		len1=len;
		while(len1) {
			pg=page[len1-1]-'0';
			//printf ("%d\n",pg);
			switch(pg) {
				case 1:printf ("O");break;
				case 2:printf ("T");break;
				case 3:printf ("T");break;
				case 4:printf ("F");break;
				case 5:printf ("F");break;
				case 6:printf ("S");break;
				case 7:printf ("S");break;
				case 8:printf ("E");break;
				case 9:printf ("N");break;
				default:printf ("O");break;
			}
			len1--;
		}
		printf ("\n");
	}
}
