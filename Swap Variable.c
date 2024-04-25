
#include<stdio.h>

void main()
{
	short a = 10 ;
	short b = 20 ;
	
	a = a + b ;
	b = a - b ;		
	a = a - b ;	
	
	printf("After Swap a = %d and b = %d " , a , b);
}

