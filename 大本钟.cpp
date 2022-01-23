#include <stdio.h> 
int main()
{
	int h,m;
	scanf("%d:%d",&h,&m);
	if(h<12)
	{
		printf("Only %02d:%02d.  Too early to Dang. ",h,m);
	}
	if(h>=12)
	{
        if(h==12&&m==0)
	    {
		   	printf("Only %02d:%02d.  Too early to Dang. ",h,m);
	    }
		for(int i=12;i<h;i++)
		{
			printf("Dang");
		}
		if(m>0)
		{
			printf("Dang");
		}
		
	}

}
