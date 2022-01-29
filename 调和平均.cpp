#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
    double m,sum=0;
	while(n--) 
	{
		scanf("%lf",&m);
		sum+=1/m;
	}
	double a;
	a=1/(sum/n);
	printf("%.2f",a);
	
}
