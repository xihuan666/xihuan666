#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int s,h,w;
		scanf("%d%d%d",&s,&h,&w);
		if(s==0)
		{
			if(h<129)
			printf("duo chi yu!");
			else if(h>129)
			printf("ni li hai!");
			else 
			printf("wan mei!");
			if(w<25)
			printf("duo chi rou!\n");
			else if(w>25)
			printf("shao chi rou!\n");
			else 
			printf("wan mei!\n");
			
		}
	    if(s==1)
		{
			if(h<130)
			printf("duo chi yu!");
			else if(h>130)
			printf("ni li hai!");
			else
			printf("wan mei!");
			if(w<27)
			printf("duo chi rou!\n");
			else if(w>27)
			printf("shao chi rou!\n");
			else
			printf("wan mei!\n");
		
		}
	}
}
