#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	int num = 4;

    for( i=1; i<=num; i++)
    {
        for( j=1; j<=num-i; j++)
        {
            printf(" ");
        }

        for( j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
            printf("\n");
        }

    for(i=num; i>=1; i--)
    {
        for( j=1; j<=num-i; j++)
        {
            printf(" ");
        }

        for( j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
	}
}
