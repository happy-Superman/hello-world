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

}
