#include<stdio.h>
int main(){
	int a,n;
	long long t,s;
	t=0;
	s=0;
	scanf("%d%d",&a,&n);
	for(int i = 1;i<=n;i++){
	  t=t*10+a;
	  s+=t;
	}
	printf("%lld",s);
	return 0;
}
