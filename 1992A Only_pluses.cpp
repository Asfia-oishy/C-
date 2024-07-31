#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int a,b,c,T,arr[3],val;
    cin>>T;
    
     while (T>0)
     {
         
         cin>>a>>b>>c;
         arr[0]=a;
         arr[1]=b;
         arr[2]=c;
        
         
         for(int i=1;i<=5;i++)
         {
             sort(arr,arr+3);
             arr[0]+=1;
         }
         cout<<arr[0]*arr[1]*arr[2]<<endl;
         T--;
         
         
     }
    return 0;
}