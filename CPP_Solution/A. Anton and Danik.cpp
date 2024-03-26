#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {
    int n;
    cin >> n;

    char s;

    int anton = 0, danik = 0;

    while (n--) {
        cin >> s;
        if (s == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik) {
        cout << "Anton";
    } else if (anton < danik) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }

}
