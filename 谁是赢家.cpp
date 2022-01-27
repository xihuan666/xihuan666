#include <stdio.h>
int main()
{
	int a,b,p;
	scanf("%d%d",&a,&b);
	int sum1=0,sum2=0;
    int p1,p2,p3;
    scanf("%d%d%d",&p1,&p2,&p3);
    sum1=p1+p2+p3;
    sum2=3-sum1;
    if((a>b&&sum2>=1)||(a<b&&sum2==3))
    {
    	printf("The winner is a: %d + %d",a,sum2);
	}
	else
	{
		printf("The winner is a: %d + %d",b,sum1);
	}
	
}
