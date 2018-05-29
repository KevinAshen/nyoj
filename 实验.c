/*#include <stdio.h>  
int main()  
{  
    int T;  
    scanf("%d",&T);  
    getchar();//scanf()会带来一个回车，用getchar()去掉它 
    while(T--)
    {  
        char s[10005],str[10005];  
        int i=0,j,top=-1;  
        gets(s);  
        while(s[i]!='\0')  
        {  
            if(s[i]=='['||s[i]=='(')  
            {  
                top++;  
                str[top]=s[i];//左括号放入str中  
            }  
            else  
            {  
                if(str[top]=='['&&s[i]==']')  
                    top--;//如果配对，将str退一格  
                else if(str[top]=='('&&s[i]==')')  
                    top--;//同上 
                else  
                    top++;  
            }  
            i++;  
        }  
        if(top==-1)//如果全部配对，就应该返回初始值-1 
            printf("Yes\n");  
        else  
            printf("No\n");  
    }  
    return 0;  
}*/
/*#include<stdio.h>
int main (void)
{
	int n,i,i1,j1,j;
	scanf("%d",&n);
	char s[n][5];
	char t;
	getchar();
	for (i=0;i<n;i++)
	{
		gets(s[i]);
	}
	for (i=0;i<n;i++)
	{
		if (s[i][0]>s[i][1]) {t=s[i][0];s[i][0]=s[i][1];s[i][1]=t;}
		if (s[i][0]>s[i][2]) {t=s[i][0];s[i][0]=s[i][2];s[i][2]=t;}
		if (s[i][1]>s[i][2]) {t=s[i][1];s[i][1]=s[i][2];s[i][2]=t;}
		printf ("%c %c %c\n",s[i][0],s[i][1],s[i][2]);
	}	
	
}
#include <stdio.h>
int main() 
{
	int f[20],i,j,a,n;
	f[1]=1,f[2]=1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&i);
		j=i-2,a=2;
		while(j--)
	{
		a++;
		f[a]=f[a-1]+f[a-2];
	}
		printf(" %d\n",f[i]);
	}
}

#include<stdio.h>
int main (void)
{
	printf ("%d",'b'-'a');
}
#include<stdio.h>
int main (void)
{
	int i2,fm=81,i3=0;
	int yinzi[20];
	for (i2=2;i2<=fm;i2++) {
			if (fm%i2==0) {
				yinzi[i3++]=i2;
				fm/=i2;
				i2--;
			}
		}
		printf ("%d %d %d",yinzi[0],yinzi[1],yinzi[2]);
}
#include<stdio.h>
#include<string.h>
#define maxn 1000
char sentence[maxn];
int main (void)
{
	//输入字符串 以EOF结尾
	//从头到尾进行遍历，找到you 经行替换成 we
	while(scanf("%s",sentence)!=EOF)
		printf("%s",sentence); 
}*/
#include<stdio.h>
int main (void)
{
	int a[5]={1,2,3,4,5};
} 
