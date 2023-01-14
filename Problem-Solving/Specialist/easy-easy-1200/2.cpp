 #include <bits/stdc++.h>
 using namespace std;
 void solve()
 {
 vector<int> arr(4);
 for(int i=0;i<4;i++)
 {
    cin>>arr[i];
 }
int maxi = max_element(arr.begin(),arr.end())-arr.begin();
int mini = min_element(arr.begin(),arr.end())-arr.begin();

if(maxi+mini==3)
{
    cout<<"YES"<<endl;
}
else 
{
    cout<<"NO"<<endl;
}
 }
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
     solve();
    }

    return 0;
 }