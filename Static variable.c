
#include<stdio.h>

int main()
{
	auto int a=28;
	static int b=10;
	printf("\n The VAlue of auto variable=%d",a);
	printf("\n The Value of static variable b=%d",b);
	if(a!=0)
	{
		printf("\n Value of satic and extern variable=%d",(b+a));
	}
	return 0;
}

