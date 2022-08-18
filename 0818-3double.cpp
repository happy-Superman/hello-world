#include<stdio.h>

int main()
{
	double d = 3.14;
	double* pd = &d;
	printf("%lf\n",d);
	*pd =5.5;
	printf("%lf",d);
	return 0;
}
