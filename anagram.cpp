#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string str1,str2;
    string flag ="true";

    cin>>str1>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int len1,len2,a[]={1,3,2};
    len1 =str1.size();
    len2 =str2.size();

    if(len1!=len2) {
        flag="false";
    }

    else
    {
        for(int i=0;i<len1;i++)
        {
            if(str1[i]!=str2[i]) flag="false";
        }
    }
   // s = "abba";
    sort(a);
    cout<<a[2];
    cout<<flag<<endl;
    return 0;
}
