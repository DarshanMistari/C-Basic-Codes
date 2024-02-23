#include <stdio.h>
int main()
{
	int year;
	
	printf("Enter the Year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("It is the Leaf_year");
	}
	else
	{
		printf("It is not Leaf_year");
	}
	return 0;
}



