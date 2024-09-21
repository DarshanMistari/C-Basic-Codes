#include<stdio.h>
int main()
{
	int num=5;
	
	void printNum(int num)
    {
        if(num == 0)
        {
            return;
        }
		printf("\n%d",num);
        printNum(num-1);
    }
    printNum(num);
}
