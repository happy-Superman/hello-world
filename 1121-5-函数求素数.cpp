#include<stdio.h>
#include<math.h>
int isprime(int x)
{
	int t = sqrt(x),i;
	for(i = 2;i<=t;i++)
	{
		if(x%i==0)
		break;
	}
	if(i>t)
	return 1;
	else
	return 0;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i = m;i<=n;i++)
	{
		int f = isprime (i);
		if(f==1)
		printf("%d\n",i);
	}
	return 0;
}
