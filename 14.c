#include<stdio.h>
int main (void)
{
	//输入n和m,j组测试数据 
	//观察m到n这几个数中，有几个m，可以++m检验
	//以100 5举例 在5到25之间的10 15 20都只能算一层，25算两层，
	//也就是说，整除一次五是都可以的，这之后再除5如果余0的话就是两层
	//之后还要再执行上述步骤 
	//输出结果
	int j,n,m,i,a,b,c,d;
	scanf ("%d",&j);
	for (i=0;i<j;i++) {
		b=0;
		scanf ("%d %d",&n,&m);
		for (a=m;a<=n;a+=m) {
			d=a%m;
			for (c=a;d==0;c/=m,d=c%m) {
				b++;
			} 
		}
		printf ("%d\n",b);
	}
}
