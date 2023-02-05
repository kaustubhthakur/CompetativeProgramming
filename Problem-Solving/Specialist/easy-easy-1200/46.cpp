#include<bits/stdc++.h>
using namespace std;
int a[10005], t;
main(){
    cin>>t;while(t--){int n,s,i=1,p,maxx=0;cin>>n>>s;while(i<=n){cin>>a[i];maxx=max(maxx,a[i]);s+=a[i];i++;}s*=2;p=sqrt(s);while(p>=1&&p*(p+1)>s)p--;if(p*(p+1)==s&&maxx<=p)cout<<"YES"<<endl;else cout<<"NO"<<endl;}}