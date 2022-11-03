#include<stdio.h>
int main(){
	int n,k;
	
	while(scanf("%d %d",&n,&k)!=EOF){
		int sum=0,sum2=0,c=0,d=0;
		if(n<k)
		{for(int i = 1;i<=n;i++)
		    {
		    sum2+=i;}
		  printf("%.1f %.1f",0.0,1.0*sum2/n);
		}
		else{
		
		for(int i =1;i<=n;i++){
			if(i%k==0)
			 {
			 sum+=i;
			 c++;}
			else
			 {
			 sum2+=i;
			 d++;}
		}
		printf("%.1f %.1f\n",sum/c*1.0,1.0*sum2/d);}
		
	}
	return 0;
	
}
