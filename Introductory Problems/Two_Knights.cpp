#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n)
{
    if (n == 1)
        return 0;

    ll x = n;
    ll x2 = x * x;
    ll x4 = x2 * x2;

    ll ans = x4 - (9 * x2) + (24 * x) - 16;

    return ans / 2;
}

int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll res = solve(i);
        cout << res << endl;
    }
    return 0;
}