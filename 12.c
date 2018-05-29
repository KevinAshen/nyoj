#include<stdio.h>  
int main()  
{  
    int a,b,t,n,x,y;  
    scanf("%d",&n);  
    while(n--)  
    {  
        scanf("%d%d",&a,&b);  
        x=a;y=b;  
        while(b)  
        {  
            t=a%b;   
            a=b;    
            b=t;  
        }  
        printf("%d %d\n",a,x*y/a);  
    }  
    return 0;  
}
