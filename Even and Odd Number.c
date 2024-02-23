#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n %d Even Number",n);
	}
	else
	{
		printf("\n %d ODD Number",n); 
	}
	return 0;
}