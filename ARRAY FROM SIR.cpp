#include <iostream>
using namespace std;
int SearchItem(int arr[], int n, int x)
{
int i;
for (i = 0; i < n; i++)
if (arr[i] == x)
return i;
return -1;
}
int main()
{
int n,x,i;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"Enter Array Elements: ";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Enter Item to search for: ";
cin>>x;
int result = SearchItem(arr, n, x);
if (result == -1)
cout<<x<<" is not present in array";
else
cout<<x<<" is present at index " <<result;
return 0;
}
