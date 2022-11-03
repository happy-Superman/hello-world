/*#include<stdio.h>
int main(){
      int n =1,sum=0;
      do{
      sum+=(n*n+3*n);
      n++	;            求和 
      	
      }
      while(n<=100);
      printf("%d\n",sum);
      return 0;
}*/


#include<stdio.h>
int main(){
	int x,count=0;
	scanf("%d",&x);//任意输入一个数字，判断你是几位数 
	do{
		x/=10;
		count++;
	}while(x!=0);
	printf("%d\n",count);
	return 0;
}
