#include <stdio.h>
int main()
{
	int n,s=1;
	int nums[1050]={0};
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int m,t;
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d",&t);
			nums[t]++;
		}
	}
	for(int j=1;j<=1000;j++)
	{ 
		if(nums[j]>=nums[s])
		{
			s=j;
		}
	}
	printf("%d %d",s,nums[s]);
}
