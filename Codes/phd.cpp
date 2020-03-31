#include<iostream>
using namespace std;
int main()
{
	int c=0,i,n;
	cout<<"enter n\n";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		if(i%n==0&&i!=1)
		{
			c++;
		}

	}
		if(c==2)
		{
			cout<<"prime number";
		}
		else
		{
			cout<<"non prime";
		}
	
	return 0;
}