#include <stdio.h>
#include <string.h> 
int main()
{
	int n;
	char a;
	scanf("%d %c\n",&n,&a);
	char b[40000];
	gets(b);
	int len=strlen(b);
	if(len<n)
	{
		for(int i=len;i<n;i++)
		{
			printf("%c",a);
		}
		for(int j=0;j<len;j++)
		{
			printf("%c",b[j]);
		}
	}
	else
	{
		for(int i=len-n;i<len;i++)
		{
			printf("%c",b[i]);
		}
	}
}
