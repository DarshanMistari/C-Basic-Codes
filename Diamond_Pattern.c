#include<stdio.h>
int main()
{
	
	int i=1;
	int j=1;
	int num = 5;

    for( i= 1; i<=num; i++)
    {
        for( j=i; j<=num; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
           printf("*");
        }
        for( j=1; j<=i; j++)
        {
            printf("*");
        }
           printf("\n");
    }

    for( i= 1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        {
          printf(" ");
        }

        for( j=i; j<=num; j++)
        {
            printf("*");
        }
        for( j=i; j<=num; j++)
        {
            printf("*");
        }
        printf("\n");
    }
	
}
