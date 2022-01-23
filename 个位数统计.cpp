#include <stdio.h> 
#include <string.h>
int main()
{
	char a[1050];
	gets(a);
	int cnt[10]={0};
	int i;
	for(i=0;i<strlen(a);i++)
	{
		switch(a[i])
		{
			case '0':cnt[0]++;break;
			case '1':cnt[1]++;break;
			case '2':cnt[2]++;break;
			case '3':cnt[3]++;break;
			case '4':cnt[4]++;break;
			case '5':cnt[5]++;break;
			case '6':cnt[6]++;break;
			case '7':cnt[7]++;break;
			case '8':cnt[8]++;break;
			case '9':cnt[9]++;break;
		}
	}
	for(i=0;i<10;i++)
	{
		if(cnt[i]!=0)
		printf("%d:%d\n",i,cnt[i]);
	}
}
