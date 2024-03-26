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
    
    int c = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[i + 1]) {
            c++;
        }
    }
    
    if (c % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
	
}
