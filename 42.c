//����T������ �����ַ���s 
//�ó�����len  ������β ����Ͱ�м��� 
//�ó�������� 
#include<stdio.h>
#include<string.h>
#define maxn 30
#define maxn1 1020
int main (void)
{
	int T,len,maxb,i;
	int bucket[maxn];
	char s[maxn1];
	scanf ("%d",&T);
	while(T--) {
		maxb=0;
		memset(bucket,0,sizeof(bucket));
		scanf ("%s",s);
		len=strlen(s);
		while(len--) {
			bucket[s[len]-'a']++;
		}
		//printf ("%d\n",bucket[3]);
		for (i=0;i<26;i++) {
			if (bucket[maxb]<bucket[i]) {
				maxb=i;
			}
		}
		printf ("%c\n",maxb+'a');
	} 
}
