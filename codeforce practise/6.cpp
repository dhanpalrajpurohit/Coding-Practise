#include <bits/stdc++.h>
#include <string.h>
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
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ab = 0;
        int ba = 0;
        int i=0;
        for(i=0;i<str.size();i++){
            if(str[i]=='a' && str[i+1]=='b'){
                ab++;
            }
            else if(str[i]=='b' && str[i+1]=='a'){
                ba++;
            }
        }
        if(ab==ba){
            cout<<str<<"\n";
        }
        if(ab>ba){
            int j=0;
            while(j<str.size()){
                if(str[j]=='a'){
                    str[j]='b';
                    cout<<str<<"\n";
                    break;
                }
            }
        }
        if(ba>ab){
            int j=0;
            while(j<str.size()){
                if(str[j]=='b'){
                    str[j]='a';
                    cout<<str<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}