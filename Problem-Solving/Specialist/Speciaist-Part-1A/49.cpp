#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int n;set<char>chst;
set<int>inst;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];


    string str;
    for(int i=0;i<n;i++) cin>>str[i];
   
for(int i=0;i<n;i++)
{
    for(int j=i;j>0;j--)
    {
        if(a[i]==a[j] && str[i]==str[j])
        {
            cout<<"YES"<<endl;
            return ;
        }
        else 
        {
            cout<<"NO"<<endl;
            return ;
        }

    }
}
cout<<"NO"<<endl;
}
int main(){

int t;
cin>>t;
while(t--)
{
    solve();
}


    return 0;
}