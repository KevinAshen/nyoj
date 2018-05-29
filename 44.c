//输入T组数据 输入s字符串 
//找出两段的长度 再用switch case计算十进制 
//最后转换八进制 
#include<stdio.h>
#include<string.h>
#define maxn 20
int main (void)
{
	int T,ten1,ten2,eight;
	int i,j,len;
	char s[maxn];
	scanf ("%d",&T);
	while (T--) {
		scanf ("%s",s);
		len=strlen(s);
		getchar();
		ten1=0;
		ten2=0;
		i=0;
		while (s[i]!='+'&&s[i]!='-') {
			if (s[i]>'0'&&s[i]<='9') {
				ten1=ten1*16+s[i]-'0';
			} else {
				ten1=ten1*16+s[i]-'a'+10;
			}
			i++;
		}
		//printf ("%d\n",ten1);
		j=i+1;
		while (j<len) {
			if (s[j]>'0'&&s[j]<='9') {
				ten2=ten2*16+s[j]-'0';
			} else {
				ten2=ten2*16+s[j]-'a'+10;
			}
			j++;
		}
		//printf ("%d\n",ten2);
		if (s[i]=='+') {
			eight=ten1+ten2;
		} else {
			eight=ten1-ten2;
		}
		printf ("%o\n",eight);	
	}
} 
