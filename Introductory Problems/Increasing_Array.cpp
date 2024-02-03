#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(int n, vector<int> arr)
{
    ll res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll dif = arr[i] - arr[i + 1];
        if (dif > 0)
        {
            res += dif;
            arr[i + 1] += dif;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll res = solve(n, arr);
    cout << res;
    return 0;
}