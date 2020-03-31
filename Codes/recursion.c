#include<stdio.h>
int main()
{
	int n,res;
	printf("Enter any number to find it's factorial");
	scanf("%d",&n);
	res=fac(n);
	printf("result");

}
int fac(int n)
{
	int res;
	if (n==0)
	{
		res=1;
	}
	else
	{
        res=n*fac(n);
	}
	return res;
}