#include<stdio.h>
int main(){
	int a,b,c=1,t,d;
	scanf("%d %d",&a,&b);
	d=a*b;
/*	if(a>b)
	{  t=a;
	a=b;
	b=t;
	}*/
             while(c!=0);{
		c=a%b;//错误做法 
		t=a;
		a=b;
		b=c;
	}
	printf("%d %d",b,d/b);
	
	
	return 0;
}

/*#include<stdio.h>
int main(){
	int a,b,c,t,d;
	scanf("%d %d",&a,&b);
	c=a%b;
	d=a*b;

             while(c!=0){                  //结构再进行优化，while（c=a%b）此时直接对c的值进行判断，并进行取模处理
                                          //  如果c不为零，在判断值为真，继续执行，当c=0时，算法结束 
		a=b;
		b=c;
		c=a%b;
	}
	printf("%d %d",b,d/b);
	
	
	return 0;
}*/正确样例，先进行一次辗转相除在进行判断 
