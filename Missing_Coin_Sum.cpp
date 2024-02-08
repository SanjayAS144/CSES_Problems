#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + 1 < arr[i])
        {
            break;
        }

        sum += arr[i];
    }
    cout << sum + 1 << endl;
    return 0;
}