#include <bits/stdc++.h>
using namespace std;
long long t,n,k,cnt,i,b[1000],x;
int main(){
cin>>t;
while(t--){
cin>>n;
cnt=0;
for(i=1;i<=n;i++){
cin>>x;
if(x==2){b[cnt+1]=i;cnt++;
}
}
if(cnt==0){cout<<1<<endl;continue;
}
printf("%lld\n",cnt%2?-1:b[cnt/2]);
}return 0;
}