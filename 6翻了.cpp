#include <stdio.h>
#include <string.h>
int main()
{
    char a[1050];
    int num=0;
    gets(a);
    int len=strlen(a);
    for(int i=0;i<=len;i++)
    {
    	if(a[i]=='6')
    	{
    		num++;
		}
		else
		{
			if(num<=3) 
			{
				for(int j=0;j<num;j++)
				{
					printf("6");
				}
			}
			else if(num>3&&num<=9)
			{
				printf("9");
			}
			else if(num>9)
			{
				printf("27");
			}
			printf("%c",a[i]);
			num=0;
		}
	}
}
