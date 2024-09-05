#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int X = 0, x = 0; // standing and stting
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
            X++;
        else
            x++;
    }

    if (X == x)
    {
        cout << 0 << endl;
        cout << s << endl;
    }
    else if (X > x)
    {
        cout << (n / 2) - x << endl;
        int i = 0;
        while (x != X)
        {
            if (s[i] == 'X')
            {
                s[i] = 'x';
                x++;
                X--;
                
            }
            i++;
        }
        cout << s << endl;
    }
    else
    {
        cout << (n / 2) - X << endl;
        int i = 0;
        while (x != X)
        {
            if (s[i] == 'x')
            {
                X++;
                x--;
                s[i] = 'X';
            }
            i++;
        }
        cout << s << endl;
    }
    return 0;
}