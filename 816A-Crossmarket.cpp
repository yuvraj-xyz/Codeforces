// Codeforce: @code_yuvi
#include <bits/stdc++.h>
using namespace std;

// Crossmarket
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        if(n==1 && m==1)
        {
            cout << 0 << endl;
        }
        else if(n<=m)
        {
            cout << (n-1)+(n-1)+(m-1)+1 << endl;
        }
        else
        {
            cout << (m-1)+(m-1)+(n-1)+1 << endl;
        }
    }
}
