#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"rus");
	string name;
	cout << "What is your name?  ";
	cin >> name;
	if (name == "Vyacheslav" || name == "vyacheslav")
	{
	  cout << "Hello, " << name << endl;
	} else {
		
		cout << "No name" << endl;
	};
	return 0;
}
