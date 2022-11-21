#include<stdio.h>
int main()
{
    int n,a1[100],b1[100],c1[100],a2[100],b2[100],c2[100];
    scanf("%d",&n);
    for(int i = 0 ; i< n;i++)
    {
        scanf("%d%d%d",&a1[i],&b1[i],&c1[i]);
        scanf("%d%d%d",&a2[i],&b2[i],&c2[i]);
    }
    for(int i = 0;i < n;i++)
    {
        printf("%.3f ",1.0*(c1[i]*b2[i]-c2[i]*b1[i])/(a1[i]*b2[i]-a2[i]*b1[i]));
        printf("%.3f\n",1.0*(c1[i]*a2[i]-c2[i]*a1[i])/(b1[i]*a2[i]-b2[i]*a1[i]));
    }
    return 0;
}