#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num / 2 << endl;
        for (int i = 1; i <= (num / 2); i++)
        {
            if (i == num / 2)
                cout << 2 << endl;
            else
                cout << 2 << " ";
        }
    }
    else
    {
        num = num - 3;
        cout << (num) / 2 + 1 << endl;
        for (int i = 1; i <= (num / 2) + 1; i++)
        {
            if (i == num / 2 + 1)
                cout << 3 << endl;
            else
                cout << 2 << " ";
        }
    }
    return 0;
}