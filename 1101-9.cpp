#include<stdio.h>
int main(){
	int x,count=1;
	double sum=0;
	scanf("%d",&x);
	for(int i =1;i<=x;i+=2){
	   if(count%2==0)
	    sum-=1.0/i;
	   else
	    sum+=1.0/i;
	   count++;	
	}
	printf("%f",4*sum);
	return 0;
}
