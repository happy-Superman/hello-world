#include<stdio.h>
int main(){
	int x,i;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&x);
		if(x<0) 
		 break;
	}
	if(i<=10)         //只要是跳出来的，一定满足该条件，即跳出即为1 
	 printf("1");
	else
	 printf("0");    //证明经过for中if的全部检验 
	 return 0;
}
