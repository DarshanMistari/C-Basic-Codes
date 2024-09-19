#include<stdio.h>
int main()
{
	int num = 5;
	int i=1;
	int j=1;
	
	for( i=1; i<=num; i++)
    {
        for( j=1; j<=num-i; j++)
        {
            printf(" ");
        }
        
        for( j=1; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
