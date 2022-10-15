#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c,p;
  scanf("%d %d %d",&a,&b,&c);
  p=1/2.0*(a+b+c);
  printf("%.2f",sqrt(p*(p-a)*(p-b)*(p-c)));
  return 0;
  
}
