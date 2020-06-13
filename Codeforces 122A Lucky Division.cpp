#include<iostream>
using namespace std;
int main()
{
	int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int n=sizeof(arr)/sizeof(int);
	int a;
	cin>>a;
	bool flag=true;
	for(int i=0;i<n;i++)
	{
		if(a%arr[i]==0)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
}
