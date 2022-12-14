/*
 * Created By : Mostafa Mahmoud
*/

#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
#define ld long double
const int N = 2e5 + 9;
bool vis[500];
bool a[500][500];
ll n{};

void DFS(ll x) {// recursive DFS to check if x can reach y or not 
    vis[x] = true;
    //directed graph
    // if x Defeated i
    for (int i = 1; i <= n; ++i) {
        if (a[x][i] && !vis[i]) {
            DFS(i);
        }
    }

}

void result() {

    cin >> n;
    for (int i = 0; i < ((n * (n - 1)) / 2) - 1; ++i) {
        ll win,lose;
        cin >>win >> lose;
        // adj matrix 
        a[win][lose] = true;
    }
    ll x{}, y{};
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (!a[i][j] && !a[j][i]) {
                // choosing any pair
                x = i, y = j;
                // break; <--- optimization - but it's not necessary since the constraints are very small 
            }
        }
    }
    DFS(x);
    if (vis[y]) {
        // if x Defeated i 
        cout << x << " " << y;
    } else {
        // y Defeated x
        cout << y << " " << x;
    }


}


int main() {
    sareeeee3
    ll tc = 1;
    //cin >> tc;
    while (tc--) {
        result();
        cout << "\n";
    }
}
