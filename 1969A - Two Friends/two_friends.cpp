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
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            p[i]=p[i]-1; //2,0,1,4,3
        }
        int cnt = n;
        int bestie, c = 0;
        for (int i = 0; i < n; i++)
        {
            int invited = i;
            c++;
            while (1)
            {
                int bestie = p[invited];
                c++;

                if (p[bestie] == i)
                {
                    cnt = min(cnt, c);
                    c = 0;
                    break;
                }
                else
                {
                    invited = bestie;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}