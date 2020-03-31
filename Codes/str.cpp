#include<iostream>
using namespace std;
struct employee
{
	int empno;
	char empname[20];
	float empsal;
}e;
int main()
{
	cout<<"Enter emp no,empname , emp sal\n";
	cin>>e.empno;
	gets(e.empname);
    cin>>e.empsal;
    cout<<endl<<e.empno<<endl;
    cout<<e.empname<<endl;
    cout<<e.empsal<<endl;
return 0;
}