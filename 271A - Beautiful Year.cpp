#include <bits/stdc++.h>
using namespace std;

// Beatiful Year
int main()
{
    int y;
    cin >> y;
    while(true)
    {
        y++;

        int a = y / 1000;
        int b = y % 1000 / 100;
        int c = y % 100 / 10;
        int d = y % 10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout << y;
            break;
        }
    }
}
