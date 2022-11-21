#include<stdio.h> 
int fun(int x)
{
	//分离每个数 ，统计个数，存入数组 
	  int a[100]={0},i=0; 
	  while(x>0)
	  {
	  	a[i]=x%10;
	  	x/=10;
	  	i++;         //最后一次执行i多加了一次 
	  }
	  for(int k = 0; k < (i-1);k++)
	  {
	  	if(a[k]>a[k+1])     //对最后一组数字的判断不理解 
	  	return 0;
	  }
	  return 1;              
}
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	flag=fun(n);
	if(flag==1)
		printf("Yes");
	else
		printf("No");
} 
