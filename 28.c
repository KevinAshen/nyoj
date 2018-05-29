#include <stdio.h>
int main (void)
{
	//»°”‡≈–∂œ1 
 	int n,m,a,sum;
 	scanf ("%d", &n);
 	while (n--) {
  	sum=0;
  	scanf ("%d", &m);
  	while (m) {
   		a=m%2;
      	if (a==1)
    	sum++;
   		m=(m-a)/2;
  	}
  	printf ("%d\n",sum);
 	}
 	return 0;
}       
