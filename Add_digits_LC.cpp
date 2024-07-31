#include<bits/stdc++.h>
#include<algorithm>
using namespace std;



bool comp(int x, int y)
{
    return (x < y);
}

int nthUglyNumber(int n, int a, int b, int c)
{

    int m = min({a, b, c}, comp);
    int i = m;
    vector<int> v;
    while (v.size() < n)
    {
        cout<<"len -"<<v.size()<<" ";
        if (i % a == 0 || i % b == 0 || i % c == 0)
        {
            v.push_back(i);
            cout<<"i = "<< i<<endl;
        }
        i++;
    }
    return v[n-1];
}

int main()
{

    cout<<nthUglyNumber(3,2,3,5)<<endl;
    return 0;

}
