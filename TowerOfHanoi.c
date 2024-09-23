#include<stdio.h>
int main()
{
	int num=3;
	
	void towerOfHanoi(int num, char src,char helper,char dest){
        if(num == 1)
        {
            printf("\n Transfer disk %d",num ," from %c",src ," to %c",dest);
            return;
        }
        towerOfHanoi(num - 1 , src, dest, helper);
         printf("\n Transfer disk %d", num ," from %c", src ," to %c",dest);
        towerOfHanoi(num - 1, helper, src,  dest);
     }
     
     towerOfHanoi(num, "S", "H", "D");
}
