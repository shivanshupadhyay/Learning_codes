#include<stdio.h>
int main()
{
	int n,x,a,b;
	printf("enter 1/2/3/4 for add, subtract, multiply, divide respectively\n");
	scanf("%d",&n);
	printf("enter both number ");
	scanf("%d%d",&a,&b);

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
    printf("invalid no");


}
printf("Entered choice=%d and result=%d",n,x);
return 0;
}