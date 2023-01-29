#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
bool flag;
int main(){
cin>>t;
while(t--){flag=1;
cin>>n>>s;
for(int i=1;i<n;i+=3)if(s[i]-s[i+1]){cout<<"NO\n";flag=0;break;}
if(flag)cout << "YES\n";}}