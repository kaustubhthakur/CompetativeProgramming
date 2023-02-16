

#include <bits/stdc++.h>
using namespace std;


int gcd_extend(int a, int b,
			int& x, int& y)
{
	// Base Case
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}

	
	else {
		int g = gcd_extend(b,
						a % b, x, y);
		int x1 = x, y1 = y;
		x = y1;
		y = x1 - (a / b) * y1;
		return g;
	}
}


void print_solution()
{
	int x, y;
    int a,b,c;
    cin>>a>>b>>c;
	
	int gcd = gcd_extend(a, b, x, y);
            int dx = x*(c/gcd);
            int dy = y*(c/gcd);
            if( a*dx+b*dy==c || (dx>=0 && dy>=0))
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
	
	print_solution();
	return 0;
}
