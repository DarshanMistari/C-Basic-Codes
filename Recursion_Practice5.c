#include<stdio.h>
int man()
{
	int x=2;
	int num=5;
	int ans;
	int xPownm1;
	int xPown;
	
	int calcPower(int x, int num)
    {
        if(num == 0)
        {
            return 1;
        }
        if(x == 0)
        {
            return 0;
        }

        xPownm1 = calcPower(x, num-1);
        xPown = x * xPownm1;
        return xPown;
    }
    
   ans = calcPower(x,num);
   printf("X^n Power:%d",ans);  
	
}
