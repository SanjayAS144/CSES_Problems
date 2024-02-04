#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> solve(int n, vector<pair<ll, ll>> arr)
{
    vector<ll> res;
    for (auto ele : arr)
    {
        ll x = ele.first;
        ll y = ele.second;
        if (x == y)
        {
            ll val = 1 + (x) * (x - 1);
            res.push_back(val);
        }
        else if (x < y)
        {
            ll val = 1 + (y) * (y - 1);
            if (y % 2 == 0)
            {
                res.push_back(val - (y - x));
            }
            else
            {
                res.push_back(val + (y - x));
            }
        }
        else
        {
            ll val = 1 + (x) * (x - 1);
            if (x % 2 == 0)
            {
                res.push_back(val + (x - y));
            }
            else
            {
                res.push_back(val - (x - y));
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    vector<ll> res = solve(n, arr);
    for (auto ele : res)
    {
        cout << ele << endl;
    }
    return 0;
}