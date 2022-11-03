#include<stdio.h>
#include<limits.h>
int main(){
	int x;
//通过输入创建数组中元素的个数 
	scanf("%d",&x);
	int arr[x];
//输入数据到数组中 
	for(int i = 0;i<x;i++){
		scanf("%d",&arr[i]);
	}
//进行最小值的循环比较 
	int min = INT_MAX;
	for(int i = 0;i<x;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	printf("%d",min);
	return 0;
}
