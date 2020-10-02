#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int count=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
for(int i=n-1;i>=0;i--)
{
	int var=1;
	int k=0;
	for(int j=i;j>=1;j--)
	{
		if(arr[j-1]<=arr[j])
		{
			var++;
		
		}
		else
		{
			break;
		}
	}
	for(int x=i;x<n-1;x++)
	{
		if(arr[x]>=arr[x+1])
		{
			var++;
		}
		else
		{
			break;
		}
	}
if(var>=count)
{
	count=var;
}
}
cout<<count<<endl;
}
