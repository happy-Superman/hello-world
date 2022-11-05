#include<stdio.h>
#include<math.h>
int main(){
	int n,flag=0;
	int s = 0;
	scanf("%d",&n);
	//先找出小于n的全部素数，每个数逐个查找 
	if(n<6){
	
			printf("No");
	return 0;
	}
	for(int i = 5;i<n;i=i+2){
		int t =sqrt(i);
		for(int j = 2;j<=t;j++){
			flag=0 ; 
			if(i%j==0)  //不是素数 
		{flag=1 ;
		break;}
		} 
		if(flag==0){
			s+=i;
		}
	}
	if(s+1==n)
	printf("Yes");
	else
	printf("No");
	return 0;
}
