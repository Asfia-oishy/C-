#include<bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n, int a, int b, int c)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    int min = pq.top();
    int ugly, count = 0;
    int i = min;
    while (count < n)
    {
        if (i % a == 0 || i % b == 0 || i % c == 0)
        {
            ugly = i;
            count += 1;
            cout<<"ugly-"<<ugly<<endl;
        }
        if ((i + 1) % a == 0 || (i + 1) % b == 0 || (i + 1) % c == 0)
        {
            i = i + 1;
            cout<<"i-"<<i<<endl;
        }
        else if ((i + 2) % a == 0 || (i + 2) % b == 0 || (i + 2) % c == 0)
        {
            i = i + 2;
            cout<<"i-"<<i<<endl;
        }
        else
        {
            i = i + 3;
            cout<<"i-"<<i<<endl;
        }
    }
    return ugly;
}


int main()
{
    cout<<nthUglyNumber(3,2,3,5);
    return 0;
}
