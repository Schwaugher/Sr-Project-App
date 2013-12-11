#include <string>
#include <fstream>
#include "LogIn.h"

using namespace std;

string User, BroncoID;
string Firstname, Lastname;
bool Faculty;
bool Req = 0;

LogIn::LogIn(void)
{
	//dummy
}

bool LogIn::Chk_Login(string user_namein, string passwordin)
{
	string user_name, password;
	string firstname, lastname;
	string req, bid;
	ifstream student_signin("student.txt");
	while (student_signin >> user_name >> password >> bid >> firstname >> lastname >> req)
	{
		if ((user_namein == user_name) && (passwordin == password))
		{
			User = user_name;
			BroncoID = bid;
			Firstname = firstname;
			Lastname = lastname;
			Req = (req == "1" ? true : false);//Convert to bool
			Faculty = false;
			return true;
		}
	}
	ifstream faculty_signin("faculty.txt");
	while (faculty_signin >> user_name >> password >> bid >> firstname >> lastname)
	{
		if ((user_namein == user_name) && (passwordin == password))
		{
			User = user_name;
			BroncoID = bid;
			Firstname = firstname;
			Lastname = lastname;
			Faculty = true;
			return true;
		}
	}
	return false;
}

bool LogIn::Chk_Reg()
{
	string regname;
	if(Faculty)
	{
		ifstream ChkReg_Ad("faculty_registered.txt");
		while (ChkReg_Ad >> regname)
		{
			if(User == regname)
				return true;
		}
	}
	else
	{
		ifstream ChkReg_Stu("student_registered.txt");
		while (ChkReg_Stu >> regname)
		{
			if(User == regname)
				return true;
		}
	}
	return false;
}

bool LogIn::Chk_Req()
{
	return Req;
}

bool LogIn::ChkFac()
{
	return Faculty;
}

string LogIn::GetUser()
{
	return User;
}

string LogIn::GetID()
{
	return BroncoID;
}

string LogIn::GetFirst()
{
	return Firstname;
}

string LogIn::GetLast()
{
	return Lastname;
}


