#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int binary_search(int arr[], int n, int l, int h, int num)
{

    //int l = 0, h = n - 1;

    while (l <= h) {
        int m = (l + h) / 2;

        if (arr[m] == num)
            return m;

        if (arr[m] > num)
            h = m - 1;
        else
            l = m + 1;
    }

    return -1;
}

int main()
{
    FAST;

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    int ans = binary_search(arr, n, 0, n-1, num);

    cout << ans << endl;

    return 0;
}

