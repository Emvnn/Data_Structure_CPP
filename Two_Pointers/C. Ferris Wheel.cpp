#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {

    FAST;

   ll n, k;
    cin >> n >> k;

    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (k == 0) {
        cout << "0";
        return 0;
    }

    sort(arr, arr + n);

    int count = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (arr[i] + arr[j] <= k) {
            i++;
            j--;
        } else {
            j--;
        }
        count++;
    }

    cout << count;
}
