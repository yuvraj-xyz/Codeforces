// Codeforces: @code_yuvi
#include <bits/stdc++.h>
using namespace std;


// Image
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        char c;
        set<char> s;
        for(int i=0; i<4; i++)
        {
            cin >> c;
            s.insert(c);
        }
        cout << s.size()-1 << endl;
    }
}
