#include <stdio.h>
int main()
{
	double m,n;
	int t;
	double t1=2.455,t2=1.26;
	double s;
	scanf("%lf%d%lf",&m,&t,&n);
	if(t==0)
	{
	   s=m*t1;
	}
	else if(t==1)
	{
		s=m*t2;
	}
	printf("%.2f ",s);
	if(s>n)
	    printf("T_T");
	else
		printf("^_^");
}
