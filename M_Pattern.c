#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	
	for( i=1; i<=7; i++)
    {
        for( j=1; j<=7; j++)
        {
            if(j==1 || j==7 ||( i==j && j<=4) || (j==8-i && j>4))
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
