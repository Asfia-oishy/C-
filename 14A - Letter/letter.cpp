#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int start[2], end[2];
    bool s = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*' && !s)
            {
                start[0] = i;
                start[1] = j;
                end[0] = i;
                end[1] = j;
                s = true;
            }
            else if (arr[i][j] == '*' && s)
            {
                if(j<start[1])
                start[1]=j;
                if(i>end[0])
                end[0] = i;
                if(j>end[1])
                end[1] = j;
            }
        }
    }
    for (int i = start[0]; i <= end[0]; i++)
    {
        for (int j = start[1]; j <= end[1]; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}