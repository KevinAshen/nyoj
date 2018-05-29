//
#include<stdio.h>
#include<string.h>
#define maxn 50
int main (void)
{
	int len,sub_0,sub_dian;
	int i,j,flag_fu,flag_dian,flag_qu;
	char s[maxn],s1[maxn],puts[maxn];
	while (scanf("%s",s)!=EOF) {
		getchar(); 
		//puts(s);
		sub_0=-1;
		flag_fu=0;
		flag_dian=0;
		flag_qu=0;
		len=strlen(s);
		s[len]='$';
		s[len+1]='$';
		s[len+2]='$';
		s[len+3]='\0';
		len=strlen(s);
		if (s[0]=='-') {
			flag_fu=1;
			s[0]='$';
		}
		for (i=0;i<len;i++) {
			if (s[i]=='.') {
				sub_dian=i;
				flag_dian=1;
				break;
			}
		}
		if (flag_dian==0) {
			s[len]='.';
			//s[len+1]='0';
			//s[len+2]='0';
			s[len+1]='\0';
			sub_dian=len;
			len=strlen(s);
		}
		printf ("%s\n",s);
		for (i=sub_dian;i<=sub_dian+3;i++) {
			if (s[i]<='0'&&s[i]>='9') {
				s[i]='0';
			}
		} 
		s[sub_dian+4]='\0';
		printf ("%s\n",s);
		len=strlen(s);
		//s[len]='\0';
		//len=strlen(s);
		for (i=0;i<sub_dian-1;i++) {
			if (s[i]!='0'&&s[i]!='$') {
				sub_0=i;
				break;
			}
		}
		for (i=0;i<sub_0;i++) {
			s[i]='$';
		}
		//四舍五入是个问题 
		j=0;
		for (i=0;i<len;i++) {
			if (s[i]!='$') {
				s1[j++]=s[i];
			}
		}
		s1[j]='\0';
		printf ("%s\n",s1);
		//如果前面全是0会原样输出 
		//printf ("%s\n",s);
	}
} 
