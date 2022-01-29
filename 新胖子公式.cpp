#include <stdio.h> 
#include <math.h>
int main()
{
	double h,w;
	scanf("%lf%lf",&w,&h);
	double i=w/(h*h);
	printf("%.1f\n",i);
	if(i>25)
	{
		printf("PANG");
	}
	else
	{
		printf("Hai Xing"); 
	}
}
