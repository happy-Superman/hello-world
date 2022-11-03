#include<stdio.h>
int main()
{
	int i;
	double sum = 1;
	for(i=2;i<=100;i++,i++)//逗号表达式，依次执行，也可以i+=2
	{sum+=1.0/i;
	} 
	printf("%f\n",sum);//默认小数点后六位 
	return 0;
}
