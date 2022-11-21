#include<stdio.h>
#include<limits.h>
int max(int x,int y)
{
	if(x>=y)
    	return x;
	else
	    return y;
}

int main()
{
      int a[11]={0},_mx=INT_MIN;
	  for(int i = 0;i<10;i++)
	  {
	  	scanf("%d",&a[i]);
	  	int mx=a[i];
	  	_mx=max(mx,_mx);      //应该在函数中与暂时的最大值进行比较 
	  }	                     //先调用函数后进行赋值 
	  printf("%d",_mx);
	  return 0;
} 

