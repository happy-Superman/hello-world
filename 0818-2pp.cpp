#include<stdio.h>
int main()
{
	char ch = 'z';
	
	char* pc = &ch;
		printf("%c\n",ch);
	*pc = 'h';
               printf("%c\n",ch);
	
	*pc = 'q' ;
               printf("%c\n",ch);
               printf("%d\n",sizeof(pc));
	return 0;
}
