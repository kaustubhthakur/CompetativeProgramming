#include<iostream>
using namespace std;
int main()
{
	long long t;cin>>t;
	while(t--)
	{
		string s;cin>>s;
		cout<<9*(s.length()-1)+(s[0]-'0')<<endl;
	}
    return 0;
}