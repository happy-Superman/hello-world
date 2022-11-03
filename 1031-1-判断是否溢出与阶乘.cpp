#include<stdio.h>
#include<limits.h>
int main(){
	int i;
	double r = 1;
	printf("%d\n",INT_MAX);//输出int能放的最大值 ，判断是否溢出 
	for(i=1;i<=10;i++)//循环次数已经确定的情况下采用 
	{               //代替for中i<=10的条件：if(!(x<=10))  break;
		r*=i;
	}
	printf("%.0f",r);
	return 0;
	
}
