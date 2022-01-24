#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	int s=0;
	scanf("%d",&n);
	getchar();
	char a[1050];
	char b[105][105];
	gets(a);
	int len=strlen(a);
	int t=len/n;
	if(len%n!=0)
	{
		t=t+1;
	}
	for(int i=t-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			if(a[s]!='\0')
			{
				b[i][j]=a[s++];
			}
			else
			{
				b[i][j]=' ';
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t;j++)
		{
			printf("%c",b[j][i]);
		}
		printf("\n");
	}
    
}
