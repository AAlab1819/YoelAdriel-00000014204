#include <iostream>
#include <stdlib.h>

using namespace std; 
int main ()
{
	int a , b;
	long long x, y, z;
	long long kurang =0;

	cin >> a >> b;
	cin >> x >> y >> z; 
	if (a<(2*x+y))
	{
		kurang+= ((2*x+y)-a);
	}
	if (b<(y+3*z))
	{
		kurang+= ((y+3*z)-b);
	}
	
	cout << kurang ;
	return 0 ;
}
