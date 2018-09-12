 #include<iostream>
  using namespace std;
  int arr[10000];
  int b[10000];

void insertionSort(int arr[], int n)
{
   int i, key, j,k;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       k=b[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];

           b[j+1]=b[j];
            j = j-1;
       }
       arr[j+1] = key;
       b[j+1]=k;
   }

}

int main()
{
    int n,s;
    cin>>s>>n;

    int i=0;

    for ( i=0;i<n; i++) cin>>arr[i]>>b[i];

    insertionSort(arr,n);

    for ( i=0; i<n; i++)
        {
            if ( s>arr[i])
            {
                s+=b[i];
            }
            else {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        return 0;

}
