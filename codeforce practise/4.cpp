#include <bits/stdc++.h>
#include <unordered_set>
typedef long long int ll;
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
    int n;cin>>n;
    int array[n];
    for(int i=0;i<n;i++)    cin>>array[i];
    sort(array,array+n);
    unordered_set<int> m;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=array[i];
        if(m.find(sum)!=m.end()){
            return true;
        }
        if(sum == 0){
            return true;
        }
        else 
            m.insert(sum);
    }
    return 0;
}