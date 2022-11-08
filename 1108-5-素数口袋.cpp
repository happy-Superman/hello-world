#include<stdio.h>
#include<math.h>
int main(){
	int sum,a,b,t,s=0,j,c=0;
	scanf("%d%d%d",&sum,&a,&b);
	for(int i = a;i<=b;i++){          //搜索a到b之间的数 
	          t=sqrt(i);
	          for(j = 2;j<=t;j++){        //进行素数检测 
	          	if(i%j==0){            //不是素数 
	          		break;
	          	}
	          }	
	          if(j>t&&i!=1){                 //给1打补丁 
	          	s+=i;                    //先执行加的操作 
	          	if(s<=sum){               //再判断是否输出 
	          	printf("%d\n",i);          
                              c++;
		}
		else              //当s已经超过sum 时，整个程序结果已经实现，不需要再往后面查找素数；所以直接结束 
		break;      //一定要注意输出超限问题，当if已经不成立的时候， 
	          }
	}
	printf("%d\n",c);
	return 0;
}
