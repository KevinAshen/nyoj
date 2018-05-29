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
	//输入n 代表n组数据
	//输入括号字符串 从左开始遍历
	//将左括号都放入str字符串中
	//当遇到右括号时 判断最后一个str字符与之是否配对
	//若配对 就抵消掉 即把str下标退一格
	//一旦不配对就错了  
    int n;
    int i,j,top;
	char kuohao[max],str[max];  
    scanf("%d",&n);  
    getchar();//scanf()会带来一个回车，用getchar()去掉它,这是为了下面的gets 
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
        if(top==-1)//如果全部配对，就应该返回初始值-1 
            printf("Yes\n");  
        else  
            printf("No\n");  
    }  
    return 0;  
} 
