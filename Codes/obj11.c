#include<stdio.h>
int main()
{
	int n;
	printf("enter year\n");
	scanf("%d",&n);
	if(n%4==0)
		printf("%d is leap year",n);
	else
		printf("%d is not leap year",n);
	return 0;
}