#include <stdio.h>
int main()
{
	int x,gw,sw,bw;
	scanf("%d",&x);
	gw=(x%10+6)%10;
	sw=(x/10%10+6)%10;
	bw=(x/100+6)%10;
               x=gw;
	gw=bw;
	bw=x;
	if(bw>=5){
	
	 printf("%d,%d,%d",gw,sw,bw);}
	else{
	 printf("%d,%d,%d",bw,sw,gw);}
	return 0;
	
}
