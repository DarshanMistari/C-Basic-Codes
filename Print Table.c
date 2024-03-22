#include<stdio.h>
int main()
{
	int num=5;
	int i;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		int temp=i*num;
		printf("%d\n",temp);
	}
	return 0;
}
