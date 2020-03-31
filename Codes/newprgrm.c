#include<stdio.h>
int main()
{
	int a;
	char x[20];
	printf("enter age and name");
    scanf("%d",&a);
    getline(x);
    printf("age=%d and name=%c",a,x[20]);
    return 0;
}