//水题 快速水过 
#include<stdio.h>
int main(void)
{
    int n,m,i,sum,a;
    scanf("%d",&n);
    while(n--) {
        a=0,sum=0;
        scanf("%d",&m);
        for(i=1;i<=m;i++) {
            a=a+i;
            sum=sum+a;
        }
        printf("%d\n",sum);
    }
}
