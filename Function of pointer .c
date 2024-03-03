#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int x,y;
	printf("\n Enter the value x and y:");
	scanf("%d %d",&x,&y);
	printf("\n Befor swap Function:");
	printf("\n x=%d, y=%d",x,y);
	swap(&x,&y);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n After swap Fuction");
	printf("\n a=%d, b=%d",*a,*b);
}
