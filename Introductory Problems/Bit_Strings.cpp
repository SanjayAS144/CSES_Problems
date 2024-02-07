#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mod = 1e9 + 7;

ll solve(ll b, ll e)
{
    if (e == 0)
        return 1;
    if (e % 2 == 0)
    {
        ll newb = ((b % mod) * (b % mod)) % mod;
        return solve(newb, e / 2) % mod;
    }
    else
    {
        return ((b % mod) * solve((b % mod), e - 1)) % mod;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << (solve(2, n) % mod) << endl;
    return 0;
}