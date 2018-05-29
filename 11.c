#include<stdio.h>  
  
int main()  
{  
    int a,b,c;  
    int n;  
    while (scanf("%d",&n) != EOF && n != 0)  
    {  
        if (n < 100 || n > 999)  
        {  
            printf("No\n");  
        }  
        else  
        {  
            a = n % 10; //取个位  
            b = n / 10 % 10;//取十位  
            c = n / 100; //取百位  
            if (n == a*a*a + b*b*b + c*c*c)  
            {//如果是水仙花数  
                printf("Yes\n");  
            }  
            else  
            {  
                printf("No\n");  
            }  
        }  
    }  
      
    return 0;  
}  
