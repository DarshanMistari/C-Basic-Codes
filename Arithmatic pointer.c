#include<stdio.h>
const int max=3;
int main()
{
	int var[]={10,100,200};
	int i,*ptr;
	ptr=var;
	for(i=0;i<max;i++)
	{
		printf("\nAddress of var[%d]=%x",i,ptr);
     	printf("\n value of var[%d]=%x",i,*ptr);
     	ptr++;
	}
	return 0;
}