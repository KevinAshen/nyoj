#include<stdio.h>
#include<string.h>
int main (void)
{
	//������Բ����ַ������룬�������޷����EOF�����⣬���ɵøи�
	//Ҫ��ѧ��c++�ͺ���
	//�����ַ���shizi֪�������ʱEOF
	//���ַ�����ĩβ���б���
	//����������������� / �Ӽ�
	//����һ����������Ҫ����a,b,c,d���ĸ��������ַ�ת������
	//Ӧ��д5������ѭ�� �������������ж�a,b,���ţ�c,d������д���ڸ��ӵ��ж�����
	//ѭ����ֹ�ֱ���� / ���� / 
	//������abcd��֪��ִ�������������������
	//��ͬ�֣������㣬ͨ��fz����������0ֱ����������ó��������fuhao
	//�ó�����fz��fm��fuhao����Ҫ��������Լ��
	//Լ�־��Ǵ�2��ʼ����fz��fm�ж����� 
	//���ͬʱ����������һ��� 
	//���Ҫ���������ķ�ĸ��1�Ļ���������дϰ��Ӧ��д���Ӿ��� 
	//ֻ��˵��������֪���ܲ���������
	int a,b,c,d,fz,fm;
	int changdu,i,j,i1,j1,i2;
	char fuhao;
	char shizi [100];
	while(scanf ("%s",shizi)!=EOF) {
		a=b=c=d=0;
		changdu=strlen(shizi)-1;
		for (i=0;shizi[i]!='/';i++) {
			a=a*10+shizi[i]-'0';
		}
		//printf ("%d\n",a);
		for (j=i+1;shizi[j]!='+'&&shizi[j]!='-';j++) {
			b=b*10+shizi[j]-'0';
		}
		//printf ("%d\n",b);
		for (i1=j+1;shizi[i1]!='/';i1++) {
			c=c*10+shizi[i1]-'0';
		}
		//printf ("%d\n",c);
		for (j1=i1+1;j1<changdu+1;j1++) {
			d=d*10+shizi[j1]-'0';
		}
		//printf ("%d\n",d);
		fm=b*d;
		if (shizi[j]=='+') {
			fz=a*d+c*b;
		} else {
			fz=a*d-c*b;
		}
		//printf ("%d %d\n",fz,fm);
		if (fz==0) {
			printf ("0\n");
		} else {
			for(i2=2;i2<=fm;i2++) {
				if (fz%i2==0&&fm%i2==0) {
					fz=fz/i2;
					fm=fm/i2;
					i2--;
				} 
			}
			if(fm==1) {
				printf ("%d\n",fz);
			} else {
				printf ("%d/%d\n",fz,fm);
			}
		}
	}
	return 0; 
}
