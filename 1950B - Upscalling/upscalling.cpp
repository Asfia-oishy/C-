#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int hash = 0;
        int h = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if (h < 2)
                {
                    if (hash < 2)
                    {
                        cout << '#';
                        hash++;
                    }
                    else
                    {
                        cout << '.';
                        hash++;
                        if (hash == 4)
                            hash = 0;
                    }
                    if (j == (2 * n) - 1)
                        hash = 0;
                }

                else
                {

                    if (hash < 2)
                    {
                        cout << '.';
                        hash++;
                    }
                    else
                    {
                        cout << '#';
                        hash++;
                        if (hash == 4)
                            hash = 0;
                    }
                    if (j == (2 * n) - 1)
                        hash = 0;
                }
            }
            h++;
            if (h == 4)
            {
                h = 0;
            }
            cout << endl;
        }
    }
    return 0;
}