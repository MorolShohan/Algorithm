#include<iostream>
#include<limits>
using namespace std;
int MatrixChainMultiplication(int p[], int n)
{
//cout<<n<<endl;
int m[n][n],s[n][n];
int i, j, k, L, q;
for (i=1; i<=n; i++)
{m[i][i] = 0;s[i][i]=0;}
for (L=2; L<=n; L++)
{
for (i=1; i<=n-L+1; i++)
{
j = i+L-1;
m[i][j] = 9999999;//INT_MAX; //assigning to maximum value
for (k=i; k<=j-1; k++)
{
q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
if (q < m[i][j])
{
m[i][j] = q;
s[i][j]=k;
}
}
}
}
cout<<"\n\nResult for M table:\n\n";
for(int x=1;x<=n;x++)
{
for(int y =1;y<=n;y++)
{
if(y<x)
cout<<"\t";
else
cout<<m[x][y]<<"\t";
}
cout<<"\n";
}
cout<<"\n\nResult for S table:\n\n";
for(int x=1;x<=n;x++)
{
for(int y =1;y<=n;y++)
{
if(y<x)
cout<<"\t";
else
cout<<s[x][y]<<"\t";
}
cout<<"\n";
}
return m[1][n];
}
int main()
{
int n,i;
cout<<"Enter number of matrices\n";
cin>>n;
int arr[n+1];
cout<<"Enter dimensions \n";
for(i=0;i<=n;i++)
{
cout<<"Enter d"<<i<<" = ";
cin>>arr[i];
}
cout<<"Minimum number of multiplications is: "<<MatrixChainMultiplication(arr, n);
return 0;
}
