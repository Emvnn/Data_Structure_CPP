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
    
    string s;
    cin >> s;
    
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1])
            count++;
    }
    
    cout << count;

}
