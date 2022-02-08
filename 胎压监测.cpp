#include <stdio.h> 
int main()
{
    int a[4],min,t,max=0,t1=0,t2=6,flag1=0,flag2=0;
    for(int i=0;i<4;i++)
    {
    	scanf("%d",&a[i]);
    	if(max<a[i])
    	{
    		max=a[i];
		}
	}
    scanf("%d%d",&min,&t);
    for(int i=0;i<4;i++)
    {
    	if(max-a[i]>t)
    	{
    		flag1++;
		}
		if(flag1==1)
		{
			t1=i+1;
			flag1=2;
		}
	}
	for(int i=0;i<4;i++)
	{
		if(a[i]<min)
		{
			flag2++;
		}
		if(flag2==1)
		{
			t2=i+1;
			flag2=2;
		}
	}
    if(flag1==0&&flag2==0)
    {
    	printf("Normal");
	}
	else if(flag1==2&&flag2==0)
	{
		printf("Warning: please check #%d!",t1);
	}
	else if(flag1==0&&flag2==2)
	{
		printf("Warning: please check #%d!",t2);
	}
	else if(flag1==2&&flag2==2&&t1==t2)
	{
		printf("Warning: please check #%d!",t1);
	}
	else if(flag1>2||flag2>2)
	{
		printf("Warning: please check all the tires!");
	}
}
