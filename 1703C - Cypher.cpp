#include <bits/stdc++.h>
using namespace std;

// Cypher
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,temp;
        cin >> n;
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            cin >> temp;
            vec.push_back(temp);
        }
        int temp2 = n;
        vector<int> res;
        int i=0;
        while(temp2--)
        {
            int x;
            string s;
            cin >> x >> s;

            int a = 0;
            for(int i=0; i<x; i++)
            {
                if(s[i]=='U')
                {
                    a--;
                }
                else
                {
                    a++;
                }
            }
            int ans;
            ans = vec[i]+ (a);
            if(ans>9)
            {
                ans-=10;
            }
            else if(ans<0)
            {
                ans+=10;
            }
            res.push_back(ans);
            i++;
        }
        for(int i=0; i<res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

