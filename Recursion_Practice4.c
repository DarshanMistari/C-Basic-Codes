#include<stdio.h>
int main()
{
	int num=5;
	int fact_nm1;
	int fact_n;
	int factorial;
	
	int calcFactorial(int num){

        if(num == 1 || num == 0){
            return 1;
        }

        fact_nm1 = calcFactorial(num -1);
        fact_n = num * fact_nm1;
        return fact_n;
    }
    
    factorial = calcFactorial(num);
    printf("Factorial Number:%d",factorial);
}
