#include<stdio.h>
int main()
{
	int i,c=0,n;
	for(i=1;i<=100;i++)
	{
		if(n%i==0)
		{
			c++;
		}
		if(c==100)
			printf("%d is a prime number\n",i);
	}
	return 0;
}