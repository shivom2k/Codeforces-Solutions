#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	cout<<"value is"<<n<<endl;
	if(  n<=127)
	{
		cout<<"byte"<<endl;
	}
    else if( n<=32767)
    {
    	cout<<"short"<<endl;
	}
    else if( n<=2147483647)
    {
    	cout<<"int"<<endl;
	}
    else if( n<=9223372036854775807)
    {
    	cout<<"long"<<endl;
	}
     else
     {
     	cout<<"BigInteger"<<endl;
	 }
return 0;
}
