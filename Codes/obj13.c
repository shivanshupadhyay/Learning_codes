#include<stdio.h>
int main()
{
	int i,n,a;
	a=0;
	printf("enter the no. ");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
       a=a+i;
	}
	printf("%d sum upto given no.= ",a);
	return 0;
}