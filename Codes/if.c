#include<stdio.h>

int main()
{
	int i=11;
	if(i++ && (i=11))
	{
		printf("Yes");

	}
	else
		printf("No");
}