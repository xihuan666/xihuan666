#include <stdio.h>
#include <string.h>
int main() 
{
	char a[100],b[100];
	int flag1=0,flag2=0,A=0,B=0;
	scanf("%s",a);
	gets(b);//gets�������Խ��ܿո� 
	int s1=strlen(a),s2=strlen(b),t=1;
	for(int i=s1-1;i>=0;i--)
	{
		if(a[i]-'0'<0||a[i]-'0'>9)
		{
			flag1=1; 
			break;
		}
		A=A+(a[i]-'0')*t;//�Ӹ�λ���ֽ��м��� 
		t=t*10;
	}
	if(A>1000||A<1)//�����������÷�Χ 
	{
		flag1=1;
	}
	t=1;
	for(int j=s2-1;j>=1;j--)
	{
		if(b[j]-'0'<0||b[j]-'0'>9)
		{
			flag2=2;
			break;
		}
		B=B+(b[j]-'0')*t;
		t=t*10;
	}
	if(B>1000||B<1)
	{
		flag2=2;
	}
	if(flag1==1&&flag2==0)
	printf("? + %d = ?",B);
	else if(flag1==0&&flag2==2)
	printf("%d + ? = ?",A);
	else if(flag1==1&&flag2==2)
	printf("? + ? = ?");//ע����д��ʽ 
	else
	printf("%d + %d = %d",A,B,A+B);
}
