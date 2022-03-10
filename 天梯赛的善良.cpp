#include <stdio.h>
int main()
{
	int m,n;
	int max=0;
	int min=1000000;
	int a[100010]={0};
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
		if(n<min)
		{
			min=n;
		}
		a[n]++;
	}
	printf("%d %d\n",min,a[min]);
	printf("%d %d\n",max,a[max]);
}
