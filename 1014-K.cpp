#include<stdio.h>
int main(){
        int a,b,c,m;
        scanf("%d %d %d",&a,&b,&c);
        if((a>=b&&a<=c)||(a>=c&&a<=b))
        m=a;
         if((b>=a&&b<=c)||(b>=c&&b<=a))
        m=b;
         if((c>=b&&c<=a)||(c>=a&&c<=b))
        m=c;
        printf("%d",m);
	return 0;
}
