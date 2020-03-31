#include<iostream>
using namespace std;
int main()
{
	int r,s,num,k,l,n;
     cout<<"Enter no.\n";
     cin>>n;
     num=n;
     while(n>0)
     {
     	r=n%10;
     	s=r*r*r;
     	n=n/10;
     	k=n%10;
     	l=k*k*k;
     	n=n/10;
     }
     if((s+l+n)==num)
     	cout<<"no.is armstrng";
     else
     	cout<<"no. is not armstrng";
     return 0;
}