#include<stdio.h>
int main(){
	int n,k,i=1;
	double s=0;
	scanf("%d",&k);
	while(s<=k){
		s+=1.0/i;
		i++;
	}
	printf("%d",i);
	return 0;
}
