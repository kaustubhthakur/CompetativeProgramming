#include<iostream>
using namespace std;
int T;
int main()
{
	cin>>T;
	while(T--)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		if((y1==y2||y1==y3||y2==y3)&&(x1==x2||x2==x3||x1==x3))
        cout<<"NO";
		else 
        cout<<"YES";
	}
}