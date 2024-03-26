#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FAST;

    string s1, s2;
    cin >> s1 >> s2;

    // Convert both strings to uppercase
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    // Compare strings
    if (s1 < s2) 
        cout << -1;
    else if (s1 > s2) 
        cout << 1;
    else 
        cout << 0;

    
}
