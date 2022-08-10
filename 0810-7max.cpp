#include<stdio.h>

//创建Max函数 
int Max(int x,int y)
{
	if(x>y)
	   return x;
	else
	   return y;
	
}


int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2); 
//法1或者创建函数	if(num1 > num2)
//
//	    printf("较大值是：%d\n",num1);
//	else
//	    printf("较大值是：%d\n",num2);
              int max = 0;
              max = Max(num1,num2);
              printf("较大值是：%d\n",max);
              





	return 0;    
                                            
}
