#include<stdio.h>
int main()
{
	int n=4;
	int i=1;
	int j=1;
	int k=1;
	
	for ( i = 1; i <= n; i++) 
	{
        for ( j = 0; j <= n - i; j++) 
		{
		    printf(" ");
        }
		int x = 1;
        for ( k = 1; k <= i; k++)
		 {
		    printf(x + " ");
            x = x * (i - k) / k;
        }
        printf("\n");
    }
}
