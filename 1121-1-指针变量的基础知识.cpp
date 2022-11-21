//关于指针 
#include<stdio.h>
int main()
{
	int *px,x;        //定义指针变量px 
	px=&x;           //px相当于是一个地址 
	scanf("%d",px);
	printf("%d\n",*px);     //*px为间接访问运算符，访问地址内的值
	return 0; 
} 



//指针变量的函数传递     /解决需要函数返回多个值问题 
//鸡兔同笼 
#include<stdio.h>
void _hanshu(int m,int n,int *p,int *q);          //函数声明一定要加分号 
int main()
{
	int m,n;
	int chi,rat;
	scanf("%d%d",&m,&n);
	_hanshu(m,n,&chi,&rat);
	if(chi!=0||rat != 0)
	printf("%d %d",chi,rat); 
	else
	printf("error");
	return 0;
} 

void _hanshu(int m,int n,int *p,int *q)
{
	int x,y;
	for(x=0;x<=m;x++)
	{
		y=m-x;
		if(2*x+4*y==n)  break;
	}
	if(x<=m)
	{
		*p=x;                   //将函数调用结束后会消除的x，y的值存放在固定的地址中 
		*q=y;
	}
	else
	{
		*p=0;
		*q=0;
	}
	return;
}
		  
//特殊点
#include<stdio.h>
int main()
{
int *p,*q,a;
p=&a;
q=p;              //指针变量相等表示左侧指针指向和右侧指针相同的地址 
scanf("%d",q);
printf("%d",a); 
return 0;}  

