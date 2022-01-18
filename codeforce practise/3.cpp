#include <bits/stdc++.h>
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
	long long int testcase=0;
    cin>>testcase;
    while(testcase--){
       int c;
       cin>>c;
       int value = 0;
       int product = 0;
       int maxproduct = INT_MIN;
       int count = 1;
       int d = 0;
       while(d<c){
           d = pow(2,count);
           count++;
       }
       for(int i=1,j=2;i<=d,j<=d;i++,j=j+2){
               value = i ^ j;
               if(value==c){
                   product = i*j;
                   if(product>maxproduct){
                       maxproduct = product;
                   }
                }
       }
       cout<<maxproduct<<"\n";
        
    }
    
    return 0;
}