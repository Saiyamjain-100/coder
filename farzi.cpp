#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            count++;
        else if (arr[i] > k)
            break;
    }
    if (count < n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > k)
                break;
            else
                count++;
        }
    }
    cout << count;
}
