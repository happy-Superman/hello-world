#include <stdio.h>
int main()
{
	double score1,score2,score3,score4,score5,aver;
	int i;
	i = 1;
	while(i<=50)
	{
	
	scanf("%lf,%lf,%lf,%lf,%lf",&score1,&score2,&score3,&score4,&score5);
	aver=(score1+score2+score3+score4+score5)/5;
	printf("平均分为%.2f",aver);
	i ++;
}
	return 0;
}
