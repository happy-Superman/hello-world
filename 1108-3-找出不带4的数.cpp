#include<stdio.h>
int main(){
	int a,b,c=0,d,e;
	scanf("%d%d",&a,&b);
	for(int i = a;i<=b;i++){
		e=i;
		d=i;
		int flag=0;
		do{                     // 注意i值的变化问题 
		    d=e%10;
		    if(d==4){
		    	  flag=1;
		    	  break;
		    }
		  e/=10;
		}while(e>0);
		if(flag==0)
		c++;
	}
	printf("%d",c);
	return 0;
}
