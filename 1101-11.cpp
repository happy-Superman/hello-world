#include<stdio.h>
int main(){
		int x;
	double sum=0;
	scanf("%d",&x);
	for(int i =1;i<=x;i++){
	   if(i%2==0)
	    sum-=1.0/i;
	   else
	    sum+=1.0/i;
	  	
	}
	printf("%f",sum);
}
