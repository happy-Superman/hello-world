#include<stdio.h>
//#define MAX 10 
enum Sex //枚举关键enum
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
    //const int num = 4;//  const修饰常变量使得num固定为4 
    //printf("%d\n",num);
    //num = 8;
    //printf("%d\n",num);
     //int arr[MAX] = {0};//数组 
    //const int n = 10;  n是变量，加从const后有常属性，为常变量 
    //int arr[n] = {0};//[需要放常量] 
    //printf("%d\n",MAX);
   printf("%d\n",MALE);
    printf("%d\n",FEMALE); 
    printf("%d\n",SECRET);    
      
    return 0;	 
}
//enum  Color
//{
//	RED
//	YELLOW
//	BLUE
//};
//int main()
//{ 
  //  enum Color color = BLUE;
    //return 0;
//}
