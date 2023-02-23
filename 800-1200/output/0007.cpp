#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 

 
int solve(){
    int n;
    string s;
    cin>>n>>s;
    if(n<=3){
        cout<<"NO"<<endl;
        return 0;
    }
    
    map<char,set<char>> m;
    m[s[0]].insert(s[1]);
    for(int i=3;i<n;i++){
        if(m[s[i-1]].find(s[i])!=m[s[i-1]].end()){
            cout<<"YES"<<endl;
            return 0;
        }
        m[s[i-2]].insert(s[i-1]);
    }
    cout<<"NO"<<endl;
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}