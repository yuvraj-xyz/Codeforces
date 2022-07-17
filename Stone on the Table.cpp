#include <bits/stdc++.h>
using namespace std;
 
// Stone on the Table
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
 
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout << count;
}
