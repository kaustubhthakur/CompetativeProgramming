#include<bits/stdc++.h>
using namespace std;
int n,d[101],a[101];
void solve(){
int i;
for(i=1;i<=n;++i)cin>>d[i];
for(i=1;i<=n;++i)
if(a[i-1]<d[i]||!a[i-1]||!d[i])a[i]=a[i-1]+d[i];
else{puts("-1");return;}
for(i=1;i<=n;++i)cout<<a[i]<<' ';cout<<'\n';
}
main(){
for(cin>>n;cin>>n;solve());

}