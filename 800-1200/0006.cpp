#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
void solve(){
    int n;
    cin>>n;
  
    bool flag=true;
    int alice=0,bob=0;
    int current=1;
    while(n){
        if(flag){
            if(n>=current){
                n-=current;
                alice+=current;
                current++;
                if (n >= current)
                {
                    n -= current;
                    bob += current;
                    current++;
                }
                else
                {
                    bob += n;
                    n = 0;
                }
            }
            else{
                alice+=n;
                n=0;
            }
            flag=false;
        }
        else{
            if(n>=current){
                n-=current;
                bob+=current;
                current++;
                if (n >= current)
                {
                    n -= current;
                    alice += current;
                    current++;
                }
                else
                {
                    alice += n;
                    n = 0;
                }
            }
            else{
                bob+=n;
                n=0;
            }
            flag=true;
        }            
    }
 
    cout<<alice<<" "<<bob<<endl;
   
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}