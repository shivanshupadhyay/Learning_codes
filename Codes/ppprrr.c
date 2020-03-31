#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i+1;j--)
        {
            printf("%d",j);
        }
        for(int k=5;k>=j;k--)
        {
            for(int l=1;l<=k;l++)
            {
                printf("");
            }
            printf("%d",k);
        }
        
        printf("\n");
    }
    return 0;
}
