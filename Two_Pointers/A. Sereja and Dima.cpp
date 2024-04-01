#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {

    FAST;
    
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    int s = 0, d = 0;

    // Variable to alternate between players
    bool playerOne = true;

    // Loop until left pointer crosses right pointer
    while (l <= r) {
        if (arr[l] >= arr[r]) {
            if (playerOne) {
                s += arr[l];
            } else {
                d += arr[l];
            }
            l++;
        } else {
            if (playerOne) {
                s += arr[r];
            } else {
                d += arr[r];
            }
            r--;
        }
        
        // Toggle player
        playerOne = !playerOne;
    }

    cout << s << " " << d;
}
