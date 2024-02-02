#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(long long n)
{
    // int mod = 1e9 + 7;
    vector<long long> res;
    res.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        res.push_back(n);
    }
    return res;
}

int main()
{
    long long n;
    cin >> n;
    auto res = solve(n);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}