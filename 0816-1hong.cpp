#include<stdio.h>

//函数的定义 
int Max(int x, int y)
{
	if(x>y)
	   return x;
	else   
                  return y;	   
}


#define MAX(X,Y) (X>Y?X:Y)//宏的定义 
int main()
{
	//函数定义 
	int a =10;
	int b =20;
	int max =Max(a,b);
	//宏的定义 
	max = MAX(a,b);
	printf("%d\n",max);
	printf("%d\n",max);
	return 0;
}



/*#include<stdio.h>
#define MAX(X,Y) (X>Y?X:Y)//宏的定义 
int main()
{
	int a = 10;
	int b = 20;
	
	max = MAX(a,b);
	printf("%d\n",max);
	return 0;
}*/
