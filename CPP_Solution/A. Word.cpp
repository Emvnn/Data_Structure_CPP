#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {

    FAST;

    string s;
    cin >> s;

    int uppercase = 0;
    int lowercase = 0;

    // Count the number of uppercase and lowercase letters
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            uppercase++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lowercase++;
    }

    // Determine whether to convert to uppercase or lowercase
    for (int i = 0; i < s.size(); i++) {
        if (lowercase >= uppercase)
            cout << char(tolower(s[i]));
        else
            cout << char(toupper(s[i]));
    }

}
