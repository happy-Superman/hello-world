#include<stdio.h>
#include <stdlib.h>
int main()
{int a;
do{a=rand();

}while(a<20||a>50);
printf("%d",a);
return a;
}
