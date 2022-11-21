#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
        int hang,lie;
        scanf("%d%d",&hang,&lie);
        int a[100][100]={0};
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        //检索最大值所在行号
        int max=a[0][0];
        int ki = 0,mi = 0,temp; 
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                if(a[i][j]>max)  //思考下max就是初值的情况
                {
                    max=a[i][j];
                    ki=i;   //储存最大值行号
                }
            }
        }
        //检索最小值所在行号
        int min=a[0][0];
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                if(a[i][j]<min)  //思考下min就是初值的情况
                {
                    min=a[i][j];
                    mi=i;   //储存最小值行号
                }
            }
        }
        //交换两行
        for(int j = 0; j< lie ; j++)
        {
            temp=a[ki][j];
            a[ki][j]=a[mi][j];
            a[mi][j]=temp;
        }
        //输出
        for(int i = 0;i<hang;i++)
        {
            for(int j = 0;j<lie;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
