#include<stdio.h>
int main(){
	int i,count;
	count = 0;
	for(i=10;i<=98;i+=2)
	{
		if(i/10==i%10)//输出类似22，33，44两位数字相同 
		{
		
		 count++;//计数器 
		 printf("%3d",i);}
	}
	printf("\n%d\n",count);//先换行，再输出 
	return 0;
}
