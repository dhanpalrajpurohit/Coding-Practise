
#include <bits/stdc++.h>
#include <cmath>

typedef long long int ll;
using namespace std;
int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    if(n==1){
        cout<<0<<"\n";
    }
    else if(n==2){
        cout<<-1<<"\n";
    }
    else{
        int count = 0;
        for(int i=0;i<n-1;i++){
            swap(arr[i],arr[i+1]);
            count++;
        }
        if(arr[0]==arr[n-1]){
            cout<<count<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
        
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
