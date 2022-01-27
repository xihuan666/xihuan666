#include <stdio.h>
int main()
{
	int n;
	char name[20];
	int h,m;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%s%d%d",name,&h,&m);
		if(h>20||h<15||m>70||m<50)
		{
			printf("%s\n",name);
		}
	}
}
