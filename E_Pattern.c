#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	for( i=1; i<=7; i++)
    {
        for( j=1; j<=7; j++)
        {
            if(j==1 || i==1 || i==4 || i==7)
            {
               printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
