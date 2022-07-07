#include<iostream>
using namespace std;
void foo(char* name)
{
	cout<< "Hello "<< name<<"\n";
}
int main()
{
	cout << "What's your name?";
	char* name1;
	cin >>name1 ;
	foo(name1);
	return 0;
}
