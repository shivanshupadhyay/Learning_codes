#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream hero;
	hero.open("iamgod.dat");
	hero<<"i am great entrepreneur";
	hero.close();
	return 0;
}