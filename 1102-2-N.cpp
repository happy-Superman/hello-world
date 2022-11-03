#include<stdio.h>
int main(){
	int n,x,a;
	scanf("%d",&n);
	for(int i =1;i<=n;i++){
		int r=0;
		scanf("%d",&x);
		while(x!=0){
		a=x%10;
     	               r=r*10+a;
     	               x/=10;}
     	               printf("%d ",r);
		
	}
	
	
	return 0;
}
 
