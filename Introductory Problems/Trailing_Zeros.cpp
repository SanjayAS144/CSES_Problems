#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n)
{
    ll res = 0;
    while (n >= 5)
    {
        n = n / 5;
        res += n;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    ll res = solve(n);
    cout << res;
    return 0;
}