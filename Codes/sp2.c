#include<stdio.h>
int main()
{
	int a,b,c,n;
	a=0;b=1;
	printf("Enter no. of terms\n");
	scanf("%d",&n);
	for(int i=0;i<=n-2;i++)
	{
         printf("%d ",a);
         c=a+b;
         a=b;
         b=c;

	}
	return 0;

}