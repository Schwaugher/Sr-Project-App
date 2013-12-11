#include <fstream>
#include <cstdio>
#include <string>
#include <sstream>
#include "Stu_Reg.h"
#include "LogIn.h"

using namespace std;
void update_line(string username)
{
	string line1, line2, deleteline, bname, fname, lname, userd, number, projects;
	string bnamec, fnamec, lnamec, userdc, numberc, projectsc;
	int newnumber;
    // open input file to find line to delete based on incoming username
    ifstream in1("faculty_projects.txt");													//change this to name of advisor txt file
	while(getline(in1,line1)){
		if ((username[0] == line1[0]) && (username[1] == line1[1]) && (username[2] == line1[2]))
			deleteline = line1;
	}
	in1.close();

	// store information to append later
	ifstream in3("faculty_projects.txt");						//change this to name of advisor txt file
		while (in3 >> bname >> fname >> lname >> userd >> number >> projects){
		if (username == bname){
			bnamec = bname;
			fnamec = fname; 
			lnamec = lname;
			userdc = userd;
			numberc = number; 
			projectsc = projects;
		}
	}
	in3.close();

	// Convert old number to integer and decrement
	newnumber = atoi(numberc.c_str());	//converts string to int
	if(newnumber>0)
		newnumber = newnumber - 1;
	else
		newnumber = newnumber;

	//convert # back to string

    stringstream ss;
    ss << newnumber;
    numberc = ss.str();

	//these lines of code create a blank text file in the folder of the name temporary
	fstream f;
	f.open( "temporary.txt", ios::out );		
	f << flush;
	f.close();
    // now open temp output file
    ofstream out("temporary.txt");
    // loop to read/write the file.  Note that you need to add code here to check if you want to write the line


	ifstream in2("faculty_projects.txt");	//change this to name of advisor txt file
    while( getline(in2,line2) )
    {
        if(line2 != deleteline)
            out << line2 << "\n";
    }
    in2.close();
    out.close();    
    // delete the original file
    remove("faculty_projects.txt");	//change this to name of advisor txt file
    // rename old to new
    rename("temporary.txt","faculty_projects.txt");	//change infile.txt to advisor txt file
	// append old info with new

	ofstream in4("faculty_projects.txt", ios::app);	//change this to name of advisor txt file
	in4 << bnamec << " " << fnamec << " " << lnamec << " " << userdc << " " << numberc << " " << projectsc << endl;
	in4.close();


    // all done!
}
//------------------------------------------------------------------------------------------------------------------
Stu_Reg::Stu_Reg(void)
{
	//dummy
}

void Stu_Reg::Write(string advisor)
{
	LogIn student;
	ofstream students("student_info.txt", ios::app);
	students <<student.GetUser()<<" "<<student.GetID()<<" "<<student.GetFirst()<<" "<<student.GetLast()<<" "<<advisor<< endl;
	students.close();
	ofstream registration("student_registered.txt", ios::app);
	registration << student.GetUser() << endl;
	registration.close();
}

string Stu_Reg::Fifo(string choice1, string choice2, string choice3)
{


	int avail_students_1;
	int avail_students_2;
	int avail_students_3;

	string  max_students;
	string id1,id2,id3;

	string dmy1, dmy2, dmy3, dmy4, dmy5;

	ifstream faculty_groups("faculty_projects.txt");	
	while (faculty_groups >>  dmy1 >> dmy2 >> dmy3 >> dmy4 >> max_students >> dmy5)
	{
		if (dmy3 == choice1)
		{
			id1 = dmy1;
			avail_students_1 = atoi(max_students.c_str());
		}

		else if (dmy3 == choice2)
		{
			id2 = dmy1;
			avail_students_2 = atoi(max_students.c_str());
		}

		
		else if (dmy3 == choice3)
		{
			id3 = dmy1;
			avail_students_3 = atoi(max_students.c_str());
		}
	}
	faculty_groups.close();


	if (avail_students_1 > 0) 
	{
		update_line(id1);
		return(choice1);
	}

	else if (avail_students_2 > 0)
	{
		update_line(id2);
		return (choice2);
	}
		
	else if (avail_students_3 > 0)	
	{
		update_line(id3);
		return (choice3);
	}
	else return ("NA");			

}

