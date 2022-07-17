#include <bits/stdc++.h>
using namespace std;
 
// Word
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int upper = 0;
    int lower = 0;
 
    for(int i=0; i<n; i++)
    {
        if(str[i] >= 65 and str[i] <=90)
        {
            upper++;
        }
        if(str[i] >= 97 and str[i] <=122)
        {
            lower++;
        }
    }
    if(upper>lower)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
 
    cout << str;
}
