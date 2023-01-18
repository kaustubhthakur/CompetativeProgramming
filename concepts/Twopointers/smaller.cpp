#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,m;
cin>>n>>m;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
vector<int> b(m);
for(int i=0;i<m;i++) cin>>b[i];
vector<int>res(m);

int i=0;int cnt=0;
for(int j=0;j<m;j++){
while(i<n && a[i]<b[j])
{
    i++;}
       res[j]=i;
    

}
cout<<cnt<<endl;
cout<<endl;
    return 0;
}