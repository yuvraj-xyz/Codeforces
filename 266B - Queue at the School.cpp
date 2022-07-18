#include <bits/stdc++.h>
using namespace std;
 
// Queue at the School
int main()
{
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    char g = 'G';
    char b = 'B';
 
    while(t--)
    {
        for(int i=1; i<n; i++)
        {
            if(s[i]==g && s[i-1]==b)
            {
                swap(s[i], s[i-1]);
                i++;
            }
        }
    }
    cout << s;
}
