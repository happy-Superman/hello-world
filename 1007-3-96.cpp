#include<stdio.h>
int main()
{  char ch;
   scanf("%C",&ch);
   ch=(ch<'a')?(ch+32):ch;
   printf("%c",ch);
   return 0;
}
