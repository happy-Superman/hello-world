#include<stdio.h>
#include<math.h>
int main(){
	int n,j,k;
	scanf("%d",&n);
	int t=sqrt(n);
	int f= 0;
	for(int i = 2;i<=t;i++){
		//先判断i是不是素数
		int te = sqrt(i);
		 for( j = 2;j<= te; j++){
		 	if(i%te==0){
		 		break;
		 	}
		 } 
		 if(j>te)//表示i是素数，在此情况下再判断n/i是否为素数
		 {
		         if(n%(n/i)==0){  //可以整乘的情况下判断整数是否为素数 
		          te = sqrt(n/i);
		            for( k = 2;k<= te; k++){
		 	if((n/i)%k==0){
		 		break;
		 	}
		            } 
		            if(k>te){
		            	printf("%d,%d",i,n/i);
		            	f=1;
		            	break;
		            } 
		            	
		 } 	
	}
}
	if(f==0)
	printf("No");
	return 0;
}
