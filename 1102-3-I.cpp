#include<stdio.h>
int main(){
	int n,x,c=0,b;
	scanf("%d%d",&n,&x);
	for(int i = 1;i<= n;i++){
		b=i;
	          while(b!=0){
	          	int a;
	          
	          	a=b%10;
	          	if(a==x)
	               {
	          	c++;}
	          	b/=10;
	          }
	}
	printf("%d",c);
	return 0;
}
