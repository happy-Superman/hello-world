#include<stdio.h>
#include<math.h>
int main(){
	int h,r,t,m;
	int v;
	scanf("%d%d",&h,&r);
//	v=r*r*h;
//	t=20000/v;
	printf("%lf\n%d",t,r*r*h);
	m= ceil(t);
	if(t>m)
            //   printf("%d",m+1); 
	return 0;
}
