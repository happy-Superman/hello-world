#include<stdio.h>
int main()
{
	int arr[50] = {0,1,2};
	int sz = 0;
	
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(int));
	sz = sizeof(arr)/sizeof(arr[0]);
	printf("sz=%d",sz);
	
	return 0;
}
