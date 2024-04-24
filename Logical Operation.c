#include<stdio.h>
int main(){
	int a = 1,b =2;
	a += b -= a;
	printf("%d %d",a,b);
	int c =10;
	c =c+1;
	printf("\n%d",c);
	return 0;
}
