#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4] = {0, 0, 0, 0};
    int x, y;
    cin >> x >> y;
    a[x] = 1;
    a[y] = 1;
    for (int i = 1; i <= 3; i++)
    {
        if (a[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}