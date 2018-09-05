#include <iostream>

using namespace std;
int main ()
{
int n;
int a=0,b=0;
int gcd;
cin >> n;
if (n%2==0)
{
	a=n/2-1;
	b= n-a;
}
else if (n%2==1)
{
	a+=(n-1)/2;
	b= n-a;
}
for(int i=1;i<=a&&i<=b;i++){

if(a%i==0 && b%i == 0 ){

gcd=i;
}
}
if (gcd!=1)
{
	a -= 1;
	b += 1;
}

cout << a <<" "<< b ;


return 0;


}
