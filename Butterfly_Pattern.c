#include<stdio.h>
int main()
{	
	int n=7;
	int i=1;
	int j=1;

    for( i=1; i<=n; i++)
    {
        for( j=1; j<=n; j++)
        {
            if(j == 1 || j == n || i == j || i+j == n+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
