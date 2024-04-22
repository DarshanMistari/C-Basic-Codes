
#include<stdio.h>
extern int x=10;
int b=20;

int main()
{
	auto int a=28;
	extern int b;
	printf("\n The VAlue of auto variable=%d",a);
	printf("\n The Value of extern variable x and b=%d,%d",x,b);
	int x=5;
	printf("\n Value of modify extern variable X=%d",x);
	return 0;
}

