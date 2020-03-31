#include<stdio.h>
int main()
{
	/* code */
	int x,y,*a,*b,temp;

    printf("enter x and y\n" );
    scanf("%d%d",&x,&y);
    printf("before swapping\nx= %d \ny= %d\n",x,y);
    a=&x;
    b=&y;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("After swapping \nx= %d\ny= %d\n",x,y );
  return 0;
} 