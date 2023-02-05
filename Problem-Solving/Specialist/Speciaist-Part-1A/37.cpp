#include <bits/stdc++.h>
using namespace std;


void solve()
{

int n;
cin>>n;
int dx,dy;
int minX=0,maxX=0,minY=0,maxY=0;
for(int i=0;i<n;i++)
{
   cin>>dx>>dy;
   minX= min(dx,minX);
maxX= max(dx,maxX);
minY = min(dy,minY);
maxY = max(dy,maxY);

}
cout<<2*(maxX+maxY-minX-minY)<<endl;;


}
int main() {
int t;
cin>>t;
while(t--)
{

   solve();
 }
 return 0;
}
