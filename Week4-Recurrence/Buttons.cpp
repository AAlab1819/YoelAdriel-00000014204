#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int total=n;
    for(int i=1;i<n;i++){
        total += (n-i)*i;
    }
    cout << total;
   
    return 0;
}
