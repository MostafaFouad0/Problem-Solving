/*
 *
 * Created By : Mostafa Mahmoud
 *
 */
#include<bits/stdc++.h>

#define sareeeee3 ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;
#define ll long long
const int N = 2e5 + 9;


void result() {
    ll n{};
    cin>>n;
    ll a[n+3];
    // since the numbers will be sorted in range [1,1000]
    a[0]=0;
    a[n+1]=1001;

    ll ans{};
    for (int i = 1; i <=n; ++i) {
        cin>>a[i];
    }
    ll tmp{};
    for (int i = 1; i <=n; ++i) {
        if(a[i]==a[i-1]+1&&a[i]==a[i+1]-1){
            // remove that number
            tmp++;
        }else{
            // calculating tha maximum answer
            ans= max(tmp,ans);
            tmp=0;
        }
    }
    // since the last step can't be calculated 
    cout<<max(ans,tmp);


}


int main() {
    sareeeee3
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        result();
        cout << "\n";
    }
}
