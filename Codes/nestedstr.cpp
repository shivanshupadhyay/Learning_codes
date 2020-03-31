#include<iostream>
using namespace std;
struct one 
{
  int a;
  float b;
  char c;
}t1;
struct two
{
	one t1;
	int d;
}t2;
int main()
{
	cin>>t2.t1.a;
	cin>>t2.t1.b;
	cin>>t2.t1.c;
	cin>>t2.d;
	cout<<t2.t1.b<<endl;
	cout<<t2.d<<endl;
	cout<<t2.d<<endl;
	return 0;
}