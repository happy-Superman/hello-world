#include<stdio.h>
int main()
{
         char arr1[] = "abc";//相当于abc\0 
         char arr2[] = {'a','b','c' ,0};//需要在末尾加，0；才能和上面的一样，=补充了\0 字符串的结束标志 
         printf("%s\n",arr1);
         printf("%s\n",arr2);
         return 0;
} 
