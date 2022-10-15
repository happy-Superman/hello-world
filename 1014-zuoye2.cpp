#include<stdio.h>
#include<math.h>
int main()
{ double a;
  scanf("%lf",&a);
  int m = ceil(a);
  int n=m-1;
  printf("%d\n%d\n%.0f",m,n,a);
  return 0;
  
}
