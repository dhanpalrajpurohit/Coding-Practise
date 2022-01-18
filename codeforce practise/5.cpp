
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int gcd(int a, int b) {
   if (b == 0)
        return a;
   return gcd(b, a % b);
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
        int n;
        cin>>n;
        int a[n];
        int b[n];
        bool exits=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i-1]%a[i]==0){
                exits=true;
            }
        }
        if(exits){
            for(int i=0;i<n;i++){
                cout<<a[i]<<"\t";
            }
            cout<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}
