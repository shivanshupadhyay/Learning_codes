#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf(" ");
        }
        while(k!=((2*i)-1))
        {

            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}
