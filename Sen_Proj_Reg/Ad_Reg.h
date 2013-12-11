#pragma once

#include <string>
using namespace std;

class Ad_Reg
{
public: 
	Ad_Reg(void);
	string space2under(string);	//replace space with underscore in a string
	string under2space(string);
	void Write(string, string, string, bool, string, int);
};