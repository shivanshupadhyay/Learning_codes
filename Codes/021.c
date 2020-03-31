#include<stdio.h>
int main()
{
	int n;
	float a,b,x;
   	printf("enter 1 to add & 2 to subtract & 3 to multiply & 4 to divide " );
	scanf("%d",&n);
	printf("enter both operands\n");
	scanf("%f%f",&a,&b);
	switch(n)
	{
		case 1:
		 x=a+b;
        break;
        case 2:
         x=a-b;
        break;
        case 3:
         x=a*b;
        break;
        case 4:
         x=a/b;
        break;
        default:
        printf("Invalid Number or choice\n");
     }   
     printf("entered operands are %f and %f and result =%f",a,b,x);
 return 0;
}