#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define MAXN 200005
#define PI 3.14159265359

int main() {

    FAST;

    int row_of_one = 0, col_of_one = 0;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int num;
            cin >> num;
            if (num == 1) {
                row_of_one = i;
                col_of_one = j;
            }
        }
    }

    // Calculate the minimum number of moves to move the one to the center
    int moves = abs(2 - row_of_one) + abs(2 - col_of_one);

    // Output the minimum number of moves
    cout <<  moves << endl;


}
