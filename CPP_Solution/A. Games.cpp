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

    vector<string> a(n);
    vector<string> b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == b[j]) {
                count++;
            }
            if(b[i] == a[j]) {
                count++;
            }
        }
    }

    cout << count << endl;

}
