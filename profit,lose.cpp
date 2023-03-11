/* calculate profit or lose */
#include<stdio.h>
int main()
{
	float cp,sp,p,l;
	printf("enter cost price and selling price:\n");
	scanf("%f%f",&cp,&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
	printf("the seller made profit of :Rs%f\n",p);
	if(l>0)
	printf("the seller made lose of :Rs%f\n",l);
	if(p==0)
	printf("there is no profit,no lose\n");
	return 0;
}
