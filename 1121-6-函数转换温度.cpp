#include<stdio.h>
// 输出华氏--摄氏温度转换表，华氏温度的转换范围是[low,high]，转换增量为step。（要求用函数实现）

//三个整数，表示low、high和step的值。

//转换表，每行一个浮点数，保留一位小数。

double swap(int x)            //一定要注意函数返回值的类型 
{
	 double cc;
	 cc=5.0*(x-32)/9;
	 return cc;
}



int main()
{
	int low,high,step;
	scanf("%d%d%d",&low,&high,&step); 
	for(int i = low;i<=high;i+=step)
	{
		double cs=swap(i);
		printf("%.1f\n",cs);
	}
	return 0;
}
