#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,z,odd,even;
     scanf("%I64d %I64d",&n ,&k);
     if(n%2==0)
     {
          odd=n/2;
          even=n/2;
     }
     else
     {
          even=(n-1)/2;
          odd=even +1;
     }
     if(k<=odd)
     {
          z=2*k -1;
          printf("%I64d",z);
     }
     else
     {
          k=k-odd;
          z=2*k;
          printf("%I64d",z);
     }


     return 0;
}
