#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int count = 0;
    int res = 0;
    char rc = ' ';
    for (auto c : s)
    {
        if (rc == ' ' || rc == c)
        {
            rc = c;
            count++;
        }
        else
        {
            count = 1;
            rc = c;
        }
        res = max(res, count);
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    int res = solve(s);
    cout << res;
    return 0;
}