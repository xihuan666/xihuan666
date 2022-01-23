#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	float a=(float)m/(float)n;
	if(n==0)
	{
		printf("%d/%d=Error",m,n);
	}
	else if(n<0)
	{
		printf("%d/(%d)=%.2f",m,n,a);
	}
	else
	{
		printf("%d/%d=%.2f",m,n,a);
	}
}
