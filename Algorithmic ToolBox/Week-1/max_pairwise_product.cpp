#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int n,i;
   cin>>n;
   cout<<endl;
   int64_t a[n];
   for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
   int64_t result = a[n-2]*a[n-1];
   cout<<result<<endl;
   return 0;
}
