
#include <bits/stdc++.h>
#include <cmath>

typedef long long int ll;
using namespace std;
int solve(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        int value=0;
        cin>>value;
        list<int> l1;
        l1.assign(value);
        array[i] = l1;
    }
    if(array.size()>=2){
        
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    #ifndef ONLINE_JUDGE 
            freopen("input.txt", "r", stdin); 
            freopen("output.txt", "w", stdout); 
    #endif 
        int t;
        cin>>t;
        while(t--){
            solve();

        }      
        return 0;
}
