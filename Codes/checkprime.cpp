#include<iostream>
using namespace std;
int main()

{
	int n,c=0;
	cout<<"Enter any no. ";
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;

	}
	if(c==2)
	cout<<"prime";

	else
cout<<"not prime";
return 0;
}