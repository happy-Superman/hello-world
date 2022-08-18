#include<stdio.h> 
int main()

{
    int a = 10;
    int* p= &a;//存放地址的变量int*指针变量 
    
    printf("%p\n",&a);
    printf("%p\n",p);
    *p = 20;//解引用操作符/又名间接访问操作符，即找到p所对应的地址a
    //然后将a的值改变 
    printf("%d",a);
    
    return 0;
}
