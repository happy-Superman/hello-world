#include<stdio.h>
int main(){
	int n,x,sum1=0,sum2=0,q=0,o=0;
	scanf("%d",&n);
	for(int i =1;i<=n;i++)
	{
	 scanf("%d",&x);
	if(x%2!=0)
	 {
	  sum1+=x;
	  q++;}
	else
	  {
	  sum2+=x;
	  o++;}
	}
	
	printf("%d,%d,%d,%d",sum1,q,sum2,o);
	
	
	return 0;
}
