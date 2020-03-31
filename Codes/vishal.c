#include<stdio.h> 
int main()
{
	 // swapping using two variable
	int a,b;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
    scanf("%d",&b);
	printf("Number before swapping are:\n");
	printf("\na=%d \nb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("\nNumber after swapping are");
	printf("\na=%d",a);
	printf("\nb=%d",b);
	return 0;
}