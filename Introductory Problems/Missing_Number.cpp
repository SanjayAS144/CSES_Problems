#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(vector<int> nums)
{
    ll res = 0;
    for (auto i : nums)
        res += i;
    return res;
}

int main()
{
    ll n;
    cin >> n;
    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> nums[i];
    }
    ll Tsum = (n * (n + 1)) / 2;
    ll Asum = sum(nums);
    ll res = Tsum - Asum;
    cout << res << endl;
    return 0;
}