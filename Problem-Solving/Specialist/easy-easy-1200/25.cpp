#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
int t;cin>>t;
while(t--){
 
int n;cin>>n;
string s;
cin>>s;
 
if(s.find("RL")<n)
{cout<<"0"<<endl;}
else if (s.find("LR")<n){
  cout<<(s.find("LR")+1)<<endl;
}
else cout<<"-1"<<endl;
}}