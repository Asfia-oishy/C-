#include<bits/stdc++.h>
using namespace std;
int main()
{
     int len,i;
     string ara;
     getline(cin,ara);
     len=ara.size();
     set<int>st;
     for(i=0;i<len; i++)
     {
          if(ara[i]>='a'&& ara[i]<='z')
               st.insert(ara[i]);
     }
     cout<<st.size()<<endl;
     return 0;
}
