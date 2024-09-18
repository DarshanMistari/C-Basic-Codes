#include<stdio.h>
int main()
{
	int i,j;
	int num=5;

	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num-i+1;j++)
		{
			printf(j);
		}
		printf("\n");
	}
}
