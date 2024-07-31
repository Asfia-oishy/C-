#include<stdio.h>
#include<math.h>
int main()
{
     int T,a,b,i;
     scanf("%d",&T);
     for(i=0 ; i<T;i++)
     {
          scanf("%d",&a);
          b=sqrt(a/6);
          printf("%d\n",b);
     }
     return 0;
}
