#include <stdio.h>
#include <string.h> 
int main()
{
	char arr[10000]={0};
	scanf("%s",arr);
	int a=0,b=0,c=0,d=0;
	int len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		if(arr[i]>='a'&&arr[i]<='z')
		{
			arr[i]-=32;
		}
		if(arr[i]=='G')
		{
			a++;
		}
		if(arr[i]=='P') 
		{
			b++;
		}
		if(arr[i]=='L')
		{
			c++;
		}
		if(arr[i]=='T')
		{
			d++;
		}
	}
	while(a!=0||b!=0||c!=0||d!=0)
	{
		if(a!=0) 
		{
			printf("G");
			a--;
		}
		if(b!=0) 
		{
			printf("P");
			b--;
		}
		if(c!=0) 
		{
			printf("L");
			c--;
		}
		if(d!=0) 
		{
			printf("T");
			d--;
		}
	}
}
