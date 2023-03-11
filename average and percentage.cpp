/* calculation of average marks obtained and percentage */
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float avg,per ;
	printf("marks obtained in all subjects:\n");
	scanf ("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=m1+m2+m3+m4+m5/5;
	printf("average marks=%f\n",avg);
	per=avg*100;
	printf("percent obtained= %f%\n",per);
	return 0;
	
}
