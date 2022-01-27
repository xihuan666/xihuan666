#include <stdio.h>
#include <string.h> 
int main()
{
	int n,m=0;
	char a[10];
	scanf("%d",&n);
	while(scanf("%s",a)!=EOF)
	{
		if(strcmp(a,"End")==0)
		{
			break;
		}
		if(m!=n)
		{
			if(strcmp(a,"ChuiZi")==0)
		    {
		       printf("Bu\n");	
	     	} 
	    	else if(strcmp(a,"Bu")==0)
	    	{
	    		printf("JianDao\n");
			}
			else if(strcmp(a,"JianDao")==0)
			{
				printf("ChuiZi\n");
			}
			m++;
		}
		else
		{
			printf("%s\n",a);
			m=0;
		}
	}
}
