#include <bits/stdc++.h>
using namespace std;

// Perfect Permutation
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        int i=1;
        while(i!=n+1)
        {
            int previous;
            if(i==1)
            {
                cout << 2 << " ";
                previous = 2;
            }
            else
            {
                if(i%2==0)
                {
                    previous-=1;
                    cout << previous << " ";
                }
                else
                {
                    previous+=3;
                    cout << previous << " ";
                }
            }
            i++;
        }
    }
    else
    {
        cout << -1;
    }
}
