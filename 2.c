/*#include<stdio.h>
#include<string.h>
int fun (char a,char b)
{
	switch (a)
	{
		case '(': if (b==')')
						return 1;
					else 
						return 0;
					break;
		case ')': if (b=='(')
						return 1;
					else 
						return 0;
					break;
		case '[': if (b==']')
						return 1;
					else 
						return 0;
					break;
		case ']': if (b=='[')
						return 1;
					else 
						return 0;
					break;						
	} 
} 
int main (void)
{
	int b,n,i,j,k,a,z;
	char s[10][10005],str[10][10005];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%s",s[i]);
	}
	for (i=0;i<n;i++)
	{
		a=strlen(s[i]);
		if (a%2!=0)
		{
			printf ("No\n");
			continue;
		}
		for (b=0;b<a;b++)
		{
			z=0;
			if (s[i][b]=='('||s[i][b]=='[')
				str[i][z++]=s[i][b];
			else
				{
					if (fun(s[i][b],str[i][z])==0)
						{
							printf ("No\n");
							break;
						}
					else
						{
							z--;
						}
				}
		}
		if (b==a)
			printf ("Yes\n");

	}
}*/
#include <stdio.h>
#define max 10005  
int main(void)  
{
	//����n ����n������
	//���������ַ��� ����ʼ����
	//�������Ŷ�����str�ַ�����
	//������������ʱ �ж����һ��str�ַ���֮�Ƿ����
	//����� �͵����� ����str�±���һ��
	//һ������Ծʹ���  
    int n;
    int i,j,top;
	char kuohao[max],str[max];  
    scanf("%d",&n);  
    getchar();//scanf()�����һ���س�����getchar()ȥ����,����Ϊ�������gets 
    while(n--) {  
        i=0;
		top=-1;  
        gets(kuohao);  
        while(kuohao[i]!='\0') {  
            if(kuohao[i]=='['||kuohao[i]=='(') {  
                top++;  
                str[top]=kuohao[i];  
            } else {  
                if(str[top]=='['&&kuohao[i]==']') {
                    top--;
				} else if(str[top]=='('&&kuohao[i]==')') {
					top--;
				} else {
                    top++;
				}
            }  
            i++;  
        }  
        if(top==-1)//���ȫ����ԣ���Ӧ�÷��س�ʼֵ-1 
            printf("Yes\n");  
        else  
            printf("No\n");  
    }  
    return 0;  
} 
