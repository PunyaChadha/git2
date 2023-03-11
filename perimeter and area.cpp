/* calculation of area and perimeter of rectangle and square and circle*/
#include<stdio.h>
int main ()
{
	int l,b,a,p,q,s,t;
	float c,r,d;
	
	float e=3.14;
	
	printf("length and breadth of rectangle=");
	scanf("%d%d",&l,&b);
	p=2*(l+b);
	q=l*b;
printf("perimeter=%d\n area=%d \n",p,q);
	printf("side of square\n");
	scanf("%d",&a);
	s=4*a;
	t=a*a;
	printf("perimeter=%d \n area =%d \n",s,t);
	printf ("radius of circle=");
	scanf("%f",&r);
	c=(2*e)*r ;
	d=e*r*r;
	printf("perimeter=%f \n area =%f",c,d);
	return 0;
}
