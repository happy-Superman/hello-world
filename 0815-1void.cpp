#include<stdio.h>

void test ()
{
	static int a = 1;//加了static，a变成一个静态的局部变量 
	a++;//             即指a改变后保持静止 不销毁 
	printf("a = %d\n",a);
	

}

int main ()
{
	int i = 0;
	while(i<5)
	{
		test();
		i++;
		
	}
	return 0;
}
