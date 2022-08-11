#include<stdio.h>
int main()
{
	int a= 0;
	int b=0;
	scanf("%d %d",&a,&b);


	int max= 0;
	max = (a>b ? a:b);


	printf("f%d",max);
	return 0;
	
}
