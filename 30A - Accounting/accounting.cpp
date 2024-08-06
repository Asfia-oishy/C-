#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, n, X, c;
    cin >> A >> B >> n;
    bool flag = false;

    if (A == B)
    {
        X = 1;
        flag = true;
    }
    else if (B == 0)
    {
        X = 0;
        flag = true;
    }
    else if (A > 0 && B > 0)
    {
        for (int i = 0;; i++)
        {
            if (A * pow(i, n) == B)
            {
                flag = true;
                X = i;
                break;
            }
            else if (A * pow(i, n) > B)
            {
                break;
            }
        }
    }
    else if (A < 0 && B < 0)
    {
        for (int i = 0;; i++)
        {
            if (A * pow(i, n) == B)
            {
                flag = true;
                X = i;
                break;
            }
            else if (A * pow(i, n) < B)
            {
                break;
            }
        }
    }
    else if (A < 0 && B > 0 && n % 2 == 1)
    {
        for (int i = -1;; i--)
        {
            if (A * pow(i, n) == B)
            {
                flag = true;
                X = i;
                break;
            }
            else if (A * pow(i, n) > B)
            {
                break;
            }
        }
    }
    else if (A > 0 && B < 0 && n % 2 == 1)
    {
        for (int i = -1;; i--)
        {
            if (A * pow(i, n) == B)
            {
                flag = true;
                X = i;
            }
            else if (A * pow(i, n) < B)
            {
                break;
            }
        }
    }

    if (flag)
        cout << X << endl;
    else
        cout << "No solution" << endl;

    return 0;
}