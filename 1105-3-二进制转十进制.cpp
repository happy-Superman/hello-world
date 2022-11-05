#include<stdio.h>
#include<math.h>
int main(){
	int n,s,a;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
	      long long x;
	      scanf("%lld",&x);
	      s=0;
	      for(int i = 0; x!=0;i++){
	      	 
	      	a=x%10;
	      	s=(a)*(pow(2,i))+s;
	      	x/=10;
	      }
	      printf("%d",s);
	}
	return 0;
} 
