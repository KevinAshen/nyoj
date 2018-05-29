#include<stdio.h>
#include<math.h>
int Judge_prime(int x);
int main (void)
{
	//输入n n组数据
	//输入x 输出最近素数 相同输右边
	//先判断自身 然后一左一右判断
	int x,n;
	int i,x1,x2;
	scanf ("%d",&n);
	while(n--) {
		scanf ("%d",&x);
		x1=x;
		x2=x;
		while(1) {
			if (x==1) {
				printf ("2\n");
				break;
			}
			if (Judge_prime(x1)==1) {
				x1++;
			} else {
				printf ("%d\n",x1);
				break;
			}
			if (Judge_prime(x2)==1) {
				x2--;
			} else {
				printf ("%d\n",x2);
				break;
			}
		}
	}
}
int Judge_prime(int x)
{
	int i,flag;
	flag=0;
	for (i=2;i<=sqrt(x);i++) {
            if(x%i==0) {
                flag=1;
                break;
            }
    }
    return flag;
}
