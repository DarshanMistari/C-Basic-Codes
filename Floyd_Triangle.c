#include<stdio.h>
int main()
{
	int rows = 4, number = 1;
	int i=1;
	int j=1;
    for(i=1; i <= rows; i++) {
        for(j = 1; j <= i; j++) 
		{
            printf(number," ");
	    	number++;
        }
    printf("\n");
    }
}
