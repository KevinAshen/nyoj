#include<stdio.h>
int main (void)
{
	//����n����n��������� ÿ������m 
	//����С�ڵ���n��������׳�
	//���1�ӵ�m����׳�
	int n,m,chen,he;
	int i,j;
	scanf ("%d",&n);
	while (n--){
		scanf ("%d",&m);
		he=0;
		m=m+1;
		while (--m) {
			chen=1;
			for (i=1;i<m+1;i+=2) {
				chen*=i;
			}
			he+=chen;
		}
		printf ("%d\n",he);
	} 
}
