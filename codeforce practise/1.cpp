#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    #ifndef ONLINE_JUDGE 
            freopen("input.txt", "r", stdin); 
            freopen("output.txt", "w", stdout); 
    #endif 
	int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;++j){
            count++;
        }
    }
    cout<<count;
    
	return 0;
}

