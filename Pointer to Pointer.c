#include<stdio.h>
int main()
{
	int i=10;
	int *j=&i;
	int **ptr=&j;
	
	
    printf("Value of i = %d ",i);
    
	printf("\n Address of i = %d ",&j);
	
	printf("\n Address of  j = %d ",ptr);
	 
	return 0;
}
