#include<stdio.h>
//����T������ ��ĸx������y
//��ASCII����ֵ������
//�����sum 
int main (void)
{
	int T,y,sum;
	char x;
	scanf ("%d",&T);
	getchar();
	while(T--) {
		scanf ("%c %d",&x,&y);
		getchar();
		//printf ("%c %d123\n",x,y);
		if ('a'<=x&&'z'>=x) {
			sum=(x-'a'+1)*(-1)+y;
		} else {
			sum=(x-'A'+1)+y;
		}
		printf ("%d\n",sum);
	} 
}
