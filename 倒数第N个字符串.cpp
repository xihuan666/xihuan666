#include <stdio.h>
#include <math.h>
int main()
{
	int l,n;
	int a,b;
	scanf("%d%d",&l,&n);
	n=pow(26,l)-n;
	for(int i=1;i<=l;i++)
	{
		a=pow(26,l-i);
		b=n/a;
		printf("%c",b+'a');
		n%=a;
	}
}
