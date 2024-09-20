#include<stdio.h>
int main()
{
	int num = 5;
	int i=1;
	int j=1;

    for(  i= 1; i<=num; i++)
    {
        for( j=1; j<=i; j++)
        {
            printf(j+" ");
        }
        printf("\n");
    }
}
