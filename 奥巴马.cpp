#include <stdio.h>
int main()
{
	int n,i,j,t;
	char c[10];
	scanf("%d %s",&t,&c);
	if(t%2==0)
	{
		n=t/2;
	}
	else
	{
		n=t/2+1;
	}
    for(i=0;i<n;i++)
    {
    	for(j=0;j<t;j++)
    	{
    		printf("%s",c);
		}
		printf("\n");
	}
}
