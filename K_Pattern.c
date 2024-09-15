#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	for( i=1; i<=7; i++)
        {
            for( j=1; j<=7; j++)
            {
                if(j==1 || (j==6-i) || (i==2+j))
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
