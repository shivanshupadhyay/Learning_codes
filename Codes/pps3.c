#include<stdio.h>
#include<math.h>
int main()
{
	int p,t;
	float r,SI,CI;
	printf("Enter value of p,r and time\n");
	scanf("%d%f%d",&p,&r,&t);
	SI=(p*r*t)/100;
	CI=p*pow((1+r/100),t);
	printf("simple interest =%f\nCompound interest=%f",SI,CI);
	return 0;
}