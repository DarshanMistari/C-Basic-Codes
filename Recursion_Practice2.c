#include<stdio.h>
int main()
{
	int num=1;
	
	void printNum(int num)
    {
        if(num == 6)
        {
            return;
        }
        printf("\n%d",num);
        printNum(num + 1);
    }
    printNum(num);
}
