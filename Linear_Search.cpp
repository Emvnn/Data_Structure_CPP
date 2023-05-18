#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define FAST  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int linear_search(int arr[], int n, int num)
{

    for(int i=0 ; i<n ; i++){
        if(arr[i] == num){
            return i;    
        }
    }
    return -1;

}

int main()
{
    FAST;

     int n; cin>> n;
     int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>> arr[i];
    }


   int num; cin>> num;

   int ans = linear_search(arr, n, num);

   cout<< ans;

}


