#include <bits/stdc++.h>
#include <cmath>

typedef long long int ll;
using namespace std;

void solve(){
    int n;
    cin>>n;
    ll array[200050];
    ll k=2000000000;
    ll ans=0;
    for(int i=1;i<=n;i++)
        cin>>array[i];
    for(int i=n;i>0;i--)
    {
        k=min(k-1, array[i]);
        if(k<0) k=0;
        ans+=k;
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    #ifndef ONLINE_JUDGE 
            freopen("input.txt", "r", stdin); 
            freopen("output.txt", "w", stdout); 
    #endif 
    solve();
    return 0;
}
