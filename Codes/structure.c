#include<stdio.h>
struct employee
{
	int empno;
	char empname[20];
	float empsal;
}e;
int main()
{
	printf("Enter empoyee no & employee Sal and empoyee name \n");
	scanf("%d",&e.empno);
	scanf("%f",&e.empsal);
	gets(e.empname);
	printf("%d%c%f\n",e.empno,e.empname,e.empsal);
	return 0;
}