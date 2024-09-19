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
            if(i == n / 2+1 || j==n /2+1 || 
            (i==1 && j>=n /2+1) || 
            (j==1 && i<=n /2) || 
            (i==n && j<=n /2) ||
            (j==n && i>=n /2+1))
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
