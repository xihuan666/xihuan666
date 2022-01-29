#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char a[300];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
    	int flag1=0,flag2=0;
    	int s=0,nums=0;
    	gets(a);
    	int len=strlen(a);
    	for(int i=0;i<len;i++)
    	{
    		int nums=0;
    		if(a[i]==',')
    		{
    			if(a[i-3]=='o'&&a[i-2]=='n'&&a[i-1]=='g')
    			{
    				flag1=1;
				}
			}
			if(a[i]=='.')
			{
			    if(a[i-3]=='o'&&a[i-2]=='n'&&a[i-1]=='g')
    			{
    				flag2=1;
				}	
			}
		}
    	if(flag1==1&&flag2==1)
    	{
    		for(int i=len-1;i>=0;i--)
    		{
    			if(a[i]==' ')
    			{
    				nums++;
				}
				if(nums==3)
				{
					break;
				}
				s++;
				
			}
			for(int j=0;j<len-s;j++)
			{
				printf("%c",a[j]);
			}
			printf("qiao ben zhong.\n");
		}
		else 
		{
			printf("Skipped\n");
		}
	}
}
