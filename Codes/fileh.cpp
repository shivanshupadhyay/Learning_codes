#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream backchod;
	backchod.open("laudalassan.dat");
	backchod<<"i am bakchod";
	backchod.close();
	return 0;
}