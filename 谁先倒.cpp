#include <stdio.h>
int main()
{
	int m,n,t,s1=0,s2=0;
	int a[100],b[100],c[100],d[100];
	scanf("%d%d",&m,&n);
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	}
	for(int i=0;i<t;i++)
	{
		if(b[i]==a[i]+c[i]&&d[i]!=a[i]+c[i])
		{
			s1++;
		}
		if(d[i]==a[i]+c[i]&&b[i]!=a[i]+c[i])
		{
			s2++;
		}
		if(s1==m+1||s2==n+1)
		{
			break;
		}
	}
	if(s1==m+1)
	{
		printf("A\n");
		printf("%d",s2);
	}
	else if(s2==n+1)
	{
		printf("B\n");
		printf("%d",s1);
	}
	
}
