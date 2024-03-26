#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {
    FAST;

    int n, count = 0;
    cin >> n;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count;

}
