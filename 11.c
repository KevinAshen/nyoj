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
            a = n % 10; //ȡ��λ  
            b = n / 10 % 10;//ȡʮλ  
            c = n / 100; //ȡ��λ  
            if (n == a*a*a + b*b*b + c*c*c)  
            {//�����ˮ�ɻ���  
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
