/*calculation of simple interest*/
#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	printf("%d%d%f%f",p,n,r,si);
	scanf ("%d%d%f%f",&p,&n,&r,&si);
	si=p*n*r/100;
	printf("%f\n",si);
	return 0;
	
}
