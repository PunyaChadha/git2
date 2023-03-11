/* find area of a triangle,given its sides */
#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,per,area;
printf("sides of triangle:\n");
scanf("%f%f%f",&a,&b,&c);
per=(a+b+c)/2;
area=sqrt(per*(per-a)*(per-b)*(per-c));
printf("area of triangle:%f\n",area);
return 0;
}
