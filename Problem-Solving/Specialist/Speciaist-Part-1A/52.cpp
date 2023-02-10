#include<iostream>
using namespace std;
int solve(int n,bool t=1){
if(n%10==9){
return solve(n/10,!t)*10+4+t;
}else{
return n/2;
}
}
int main(){
int t,n;
cin>>t;
while(t--){
cin>>n;
if(n%10==9){
int res=solve(n);
cout<<res<<' '<<n-res<<endl;
}else{
cout<<(n>>1)<<' '<<(n-(n>>1))<<endl;
}
}
return 0;
}