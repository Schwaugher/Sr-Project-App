#include <fstream>
#include <string>
#include "Ad_Reg.h"

using namespace std;

Ad_Reg::Ad_Reg(void)
{
	//dummy
}

string Ad_Reg::space2under(string AOI)
{
	for(unsigned int i = 0; i < AOI.size(); i++){
    if(AOI[i] == ' '){ 
           AOI[i] = '_';
	}
}
return AOI;

}

string Ad_Reg::under2space(string AOI)
{
	for(unsigned int i = 0; i < AOI.size(); i++){
    if(AOI[i] == '_'){ 
           AOI[i] = ' ';
	}
}
return AOI;
}

void Ad_Reg::Write(string bronconame, string firstname, string lastname, bool stu_def, string proj_areas, int max_stu)
{
	ofstream projects("faculty_projects.txt", ios::app);
	projects <<bronconame<<" "<<firstname<<" "<<lastname<<" "<<stu_def<<" "<<max_stu<<" "<<proj_areas<< endl;
	projects.close();
	ofstream registration("faculty_registered.txt", ios::app);
	registration << bronconame << endl;
	registration.close();
}