#pragma once	

#include <string>
using namespace std;

class LogIn
{
public: 
	LogIn(void);
	bool Chk_Login(string, string);
	bool Chk_Reg();
	bool Chk_Req(); //For Students
	bool ChkFac();
	string GetUser();
	string GetID();
	string GetFirst();
	string GetLast();
	
};