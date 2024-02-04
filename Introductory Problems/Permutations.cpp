#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> solve(int n)
{
    vector<ll> res;
    if (n == 1)
    {
        res.push_back(1);
        return res;
    }
    if (n <= 3)
        return res;

    ll i = 1;
    if (n % 2 == 0)
    {
        i = 2;
    }
    while (i <= n)
    {
        res.push_back(i);
        i += 2;
    }
    i = 2;
    if (n % 2 == 0)
    {
        i = 1;
    }
    while (i <= n)
    {
        res.push_back(i);
        i += 2;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> res = solve(n);
    if (res.size() == 0)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (auto i : res)
        {
            cout << i << " ";
        }
    }
    return 0;
}