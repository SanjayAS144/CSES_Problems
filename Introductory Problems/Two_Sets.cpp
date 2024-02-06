#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> solve(ll n)
{
    vector<vector<ll>> res;
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2 != 0)
        return res;

    ll rsum = sum / 2;
    vector<ll> res1;
    vector<ll> res2;
    while (n > 0)
    {
        if (rsum - n >= 0)
        {
            rsum -= n;
            res1.push_back(n);
        }
        else
        {
            res2.push_back(n);
        }
        n--;
    }
    res.push_back(res1);
    res.push_back(res2);
    return res;
}

int main()
{
    ll n;
    cin >> n;
    vector<vector<ll>> res = solve(n);
    if (res.size() == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    for (auto set : res)
    {
        cout << set.size() << endl;
        for (auto i : set)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}