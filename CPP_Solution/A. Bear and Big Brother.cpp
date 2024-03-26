#include <iostream>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {
    FAST;

    int a, b, c = 0;
    cin >> a >> b;

    while (a <= b) {
        // Triple the value of 'a' and double the value of 'b'
        a *= 3;
        b *= 2;

        // Increment the count of years

        c++;
    }

    cout << c;
}
