#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> res;
void solve(vector<ll> &arr, ll i, ll k)
{
    if (arr.size() == 1)
    {
        res.push_back(arr[0]);
        return;
    }

    ll index = (i + k) % arr.size();
    res.push_back(arr[index]);
    arr.erase(arr.begin() + index);
    solve(arr, index, k);
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            arr.push_back(i);
        else
            res.push_back(i);
    }
    if (n % 2 == 0)
    {
        solve(arr, 0, 1);
    }
    else
    {
        solve(arr, arr.size() - 1, 1);
    }
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}