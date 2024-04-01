#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {

    FAST;

   int n, x;
    cin >> n >> x;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left].first + arr[right].first;
        if (sum == x) {
            cout << arr[right].second << " " << arr[left].second;
            return 0;
        } else if (sum > x) {
            right--;
        } else {
            left++;
        }
    }

    cout << "-1";
}
