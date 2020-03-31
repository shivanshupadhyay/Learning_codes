#include<stdio.h>
int main()
{
	int t;
	float F,c;
   	printf("enter 1 to convert celcius to fahrenheit or \nenter 2 to convert fahreinheit to celcius\n" );
	scanf("%d",&t);
	switch(t)
	{
		case 1:
		  printf("enter temperature in celcius\n ");
		  scanf("%f",&c);
          F=1.8*c+32.0;
          printf("fahreinheit temperature=",F);
        break;
        case 2:
          printf("enter temperature in fahrenheit\n");
          scanf("%f",&F);
          c=0.556*(F-32);
          printf("celcius temperature=\n",c);
        break;
        default:
        printf("Invalid Number or choice\n");
     }   

}