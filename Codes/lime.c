#include<stdio.h>
int main()
{
	int a=0,n,i;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0&&i!=1)
		{
			a++;
		}
	}
	if(a==2)
	{
		printf("The given number is prime\n");
	}
	else
	{
		printf("The given no. is non prime");
	}
	return 0;
}