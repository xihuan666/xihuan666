#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int m[1000],sum=0;
	double t;
	char name[1000][10];
	for(int i=0;i<n;i++)
	{
		scanf("%s %d",name[i],&m[i]);
		sum+=m[i];
	}
	t=sum/n*0.5;
	int min=m[0];
	int s;
	for(int i=0;i<n;i++)
	{
		if(fabs(min-t)>fabs(m[i]-t))
		{
			min=m[i];
		    s=i;
		}
	}
	printf("%.0f %s",t,name[s]);
}
