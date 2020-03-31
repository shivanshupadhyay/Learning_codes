#include<stdio.h>
int main()
{
	/* code */
	int i,n;
	long f=1;
	printf("enter numer\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial=%d",f);
	return 0;
}