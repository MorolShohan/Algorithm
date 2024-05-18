# include <iostream>
using namespace std;

int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pIndex = s;
//all the other element comparisonwith pivot
 for(int i = s;i<e;i++)
 {
 if(arr[i]<pivot)
 {
 int temp = arr[i];
 arr[i] = arr[pIndex];
 arr[pIndex] = temp;
 pIndex++; //move forward array for future comparison
 }
 }

 int temp = arr[e];
 arr[e] = arr[pIndex];
 arr[pIndex] = temp; //keep track of that particular index

 return pIndex;
}

void QuickSort(int arr[], int s, int e)
{
 if(s<e) //till we have more than one element in sub array
 {
 int p = Partition(arr,s, e);
 QuickSort(arr, s, (p-1));
 QuickSort(arr, (p+1), e);
 }
}


int main()
{

 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];

 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
 cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }
 cout<<endl;

 QuickSort(myarray,0,(size-1));

 cout<<"After Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }

 return 0;
}
