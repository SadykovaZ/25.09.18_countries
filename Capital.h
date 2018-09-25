#include<iostream>
#include<string>
using namespace std;
#ifndef _CAPITAL_
#define _CAPITAL_

struct Capital
{
	string Name;
	int population;
	string major;

	void enter()
	{
		cin >> Name >> population >> major;
	}
	void print()
	{
		cout << Name << " " << population << " " << major << endl;
	}

};
#endif // !_CAPITAL_
