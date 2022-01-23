#include <stdio.h>
#include <string.h>
int main() 
{
	char a[20],name1[20],name2[20];
	int i=0;
	while(scanf("%s",a)!=EOF&&strcmp(a,".")!=0)
	{
		i++;
		if(i==2)
		{
			strcpy(name1,a);
		}
		if(i==14)
		{
			strcpy(name2,a);
		}
	}
	if(i<2)
	{
		printf("Momo... No one is for you ...");
	}
	else if(i>=2&&i<14)
	{
		printf("%s is the only one for you...",name1);
	}
	else
	{
		printf("%s and %s are inviting you to dinner...",name1,name2);
	}
}
