#include<stdio.h>
int main()
{
	void printSum(int i, int num, int sum){
        if(i == num)
        {
            sum += i;
            printf("Sum of N natural Number %d:",sum);
            return;
        }
        sum += i;
        printSum(i+1, num, sum);

    }
    
    printSum(1,5,0);

}
