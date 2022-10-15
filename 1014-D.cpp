#include <stdio.h>
int main()
{ char a,b,c,d;
  int A,B,C,D;
  scanf("%c %c %c %c",&a,&b,&c,&d);
  if(a>=97&&a<=122)
  A=1;
  else if(a>=65&&a<=90) A=2;
  else if(a>=48&&a<=57) A=3;
  else A=4;
  if(b>=97&&b<=122)
  B=1;
  else if(b>=65&&b<=90) B=2;
  else if(b>=48&&b<=57) B=3;
  else B=4;
  if(c>=97&&c<=122)
  C=1;
  else if(c>=65&&c<=90) C=2;
  else if(c>=48&&c<=57) C=3;
  else C=4;
  if(d>=97&&d<=122)
  D=1;
  else if(d>=65&&d<=90) D=2;
  else if(d>=48&&d<=57) D=3;
  else D=4;
  printf("%d %d %d %d",A,B,C,D);
  return 0;
}
