#include<stdio.h>
#include<string.h>
#define maxn 1000
int main (void)
{
	//�����ַ��� ��EOF��β
	//��ͷ��β���б������ҵ�you �����滻�� we
	int len,i,j;
	char sentence[maxn];
	while((gets(sentence))!=NULL) {
		len=strlen(sentence);
		i=0;
		/*sentence[len]=' ';
		sentence[len+1]='\0';
			if (sentence[i]=='y'&&sentence[i+1]=='o'&&sentence[i+2]=='u'&&sentence[i+3]==' ') {
				sentence[i]='w';
				sentence[i+1]='e';
				for (j=i+2;j<len;j++) {
					sentence[j]=sentence[j+1];
				}
				len=strlen(sentence);	
			}	
		sentence[len]=' ';
		sentence[len+1]='\0';
		len=strlen(sentence);*/	
		for (i=0;i<len+1;i++) {
			if (sentence[i]=='y'&&sentence[i+1]=='o'&&sentence[i+2]=='u') {
				sentence[i]='w';
				sentence[i+1]='e';
				for (j=i+2;j<len;j++) {
					sentence[j]=sentence[j+1];
				}
				len=strlen(sentence);	
			}
		} 
		puts(sentence);
	}
}
