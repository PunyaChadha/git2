/* pre and post increment or decrement operators*/
#include<stdio.h>
int main ()
{
	int a=1,b=2,c,d,e,f;
	c=a++;
	d=--a;
	e=b++;
	f=b--;
	printf("%d\t%d\t%d\t%d\n",c,d,e,f);
	return 0;
	
}
