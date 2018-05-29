#include<stdio.h>
#include<string.h>
int main (void)
{
	//本题可以不用字符串输入，但是我无法解决EOF的问题，不由得感概
	//要是学了c++就好了
	//输入字符串shizi知道输入的时EOF
	//从字符串至末尾进行遍历
	//会有三种情况，数字 / 加减
	//数字一共会有两个要放入a,b,c,d这四个，利用字符转化整数
	//应该写5个并列循环 这样可以依次判断a,b,符号，c,d不至于写过于复杂的判断条件
	//循环终止分别放在 / 符号 / 
	//这样有abcd，知道执行哪样操作，完成运算
	//先同分，在运算，通过fz的运算结果（0直接输出），得出结果符号fuhao
	//得出最后的fz，fm，fuhao，还要进行最后的约分
	//约分就是从2开始，对fz，fm判断整除 
	//如果同时能整除，就一起除 
	//最后还要考虑若最后的分母是1的话，按照书写习惯应该写分子就行 
	//只能说，根本不知道能不能做出来
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
