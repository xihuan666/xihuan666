#include <stdio.h>
int main()
{
	int n;
	char sex;
	double h;
	scanf("%d",&n);
	while(n--) 
	{
		getchar();//��getchar���ջس� 
		scanf("%c %lf",&sex,&h); 
		if(sex=='F')
		{
			h=h*1.09;
			printf("%.2f\n",h);
		}
		else
		{
			h=h/1.09;
			printf("%.2f\n",h);
		}
	
	}
}
