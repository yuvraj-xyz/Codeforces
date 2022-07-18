#include <bits/stdc++.h>
using namespace std;

// Another String Minimization Problem
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        string s;
        for(int i=0; i<m; i++)
        {
            s.push_back('B');
        }
        for(int i=0; i<n; i++)
        {
            int j = a[i]-1;
            int k = (m+1-j)-2;
            if(s[j]!='A' && j<=k)
            {
                s[j] = 'A';
            }
            else if(s[j]!='A' && j>k && s[k]=='A')
            {
                s[j] = 'A';
            }
            else
            {
                s[k] = 'A';
            }
        }
        cout << s << endl;
    }
}
