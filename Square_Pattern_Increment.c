#include<stdio.h>
int main()
{
	int rows=5;
	int i=1;
	int j=1;
	int k=1;
	
	for (i = 1; i <=rows; i++)
	{
		for ( j = 1; j <= rows-i; j++)
		{
			printf("1 ");
		}
		for (k = 1; k <= i; k++)
		{
		   printf(i," ");
		}
	  printf("\n");
	}
}
