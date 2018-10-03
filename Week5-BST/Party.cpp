#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int n , ans = 0 , count = 0;
    cin >> n;
    int a[n];
    for(int i = 1 ; i <= n ;i++)
        cin >> a[i];
    for(int i = 1 ; i <= n ;i++)
    {
        count = 1;
        int x = a[i];
        while(x != -1)
        {
            x = a[x];
            count++;
        }
        ans = max(ans , count);
    }
    cout << ans;
    return 0;
}
