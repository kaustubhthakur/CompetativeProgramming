#include <bits/stdc++.h>
using namespace std;
char s[101];
int main()
{
	int T,n,i,c;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%s",&n,s);
		for(c=s[0]=='1',i=1;i<n;i++)
			putchar(s[i]=='1'?"-+"[c^=1]:'+');
		putchar(10);
	}
}