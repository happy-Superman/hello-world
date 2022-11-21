/* /* /* #include<stdio.h>
int main()
{
       int n, i;
       scanf("%d",&n);
       i=2;
       while(n>1)
       {
        if(n%i==0)
        {
            printf("%d\t",i);
            n/=i;
        }
        else
            i++;
       }
        return 0;
} */
/* #include<stdio.h>
int main()
{
    int a=1,b=2;
    int t;
    t=a,a=b,b=t;
    printf("%d %d",a,b);
    return 0;
}

int i = 0,a =0;
while(i<20)
{
    for(;;)
    {
        if((i%10)==0)
            break;
        else
            i--;
    }
        i+=11;
        a+=i;
}
 */ 
 
/* 
 #include<stdio.h>
 int fun(int x)
 {
    int a=2;
    return a;
 }
 int main()
 {
    int a = fun();
    printf("%d",a);
    return 0;
 } */

/* 
 #include <stdio.h>

int IsPrime(int n) 

{

int i;

for (i=2;i<n;i++)

     if (n%i==0) return 0;

 return 1;

}

int main()

{

int j,k;

printf("Enter an integer number between 2 and 10000:");

scanf("%d",&k);

printf("\nThe prime factor of %d is :",k);

for (j=2;j<=k;j++)

    if ((!(k%j))&&IsPrime(j))   printf("\n %4d",j);

return 0;

} */

#include<stdio.h>

double fun(int m)

{

double s=0;

int i;



for (i=1;i<=m;i++)

s+=1.0/i;

return s;

}

int main()

{

int m;

printf("Please enter 1 integer number:");

scanf("%d",&m);

printf("\nThe result is %5f\n",fun(m));

return 0;

}