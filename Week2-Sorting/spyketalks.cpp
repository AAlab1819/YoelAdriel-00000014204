#include <iostream>
 
using namespace std;
int main()
{
  int array[1000], n, c, d, pairs = 0, swap;
 
  
  cin >> n;
  
  for (c = 0; c < n; c++)
    cin >> array[c];
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
      
    }
    if (array[c] != 0 && array[c] == array[c-1])
        {
            pairs += 1;
            if (c + 1 < n && array[c] == array[c+1])
            {
                pairs = -1;
                break;
            }
        }
  }
 
  /* cout << "sort" << endl ;
 
  for ( c = 0 ; c < n ; c++ )
     cout << array[c] <<" "; */
 cout <<   pairs; 
  return 0;
}
