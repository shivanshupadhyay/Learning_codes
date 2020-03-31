#include<iostream>
using namespace std;
int main()
{
	int n,res;
	cout<<"enter any no. to find it's factorial\n";
	cin>>n;
	res = fac(n);
	cout<<"result: "<<res;

}
int fac(int n)
{
	int res;
	if (n==0)
	{
		res=1;
	}
	else
	{
        res=n*fac(n);
	}
	return res;
}