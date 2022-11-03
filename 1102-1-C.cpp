#include<stdio.h>
int main(){
     int x,a,r=0;
     scanf("%d",&x);
     while(x!=0){
     /*	do{
     		x/=10;
     	}while(x%10==0);*/
     	a=x%10;
     	r=r*10+a;
     	x/=10;
     	
     } 
      printf("%d",r);
   return 0;
}
