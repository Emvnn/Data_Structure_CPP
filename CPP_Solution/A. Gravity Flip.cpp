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
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
}
