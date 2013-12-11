ECE 480
=======
Software Engineering
Project 3: Initial Report
-------------------------

*Raymond Lopez*
*Angela Matias*
*Troy Najera*
*Brian Swager*

**5/06/2013**

**Objective:**
	*To be able to streamline and automate the senior project application process; along with the adviser assignment procedure.

**Problem Description:**

	*This project will consist of two separate GUI interfaces, one each for the student and an adviser. There will be two separate databases to store the student and faculty information into. In addition to the previous databases there will be a third one filled with preloaded data that contains a student roster, which will list names, student ID’s and if the required courses have been met for each student; this will be the test data for our program. 
	Two classes will  also be constructed, Faculty and Student.  The Faculty class will have the following data members: name, quarter, year, senior_project_area, student_defined_project.  Student_defined_project will be a boolean data type that will indicate whether the faculty member accepts student defined senior projects.  The Student class will have the following data members: name, bronco_ID, quarter, year, major and advisor. The student GUI will be linked to faculty database so that the database will be read and partially displayed on the student GUI so the student/user can select an adviser.

**Requirement Analysis:**

	*Our project will be done in a Windows Forms Application written in Visual C++.  Our goal will be to have two separate graphical user interfaces, a faculty interface and a student interface.  The faculty and student GUI’s will have their own databases; for simplicity, we will use file IO and text files to store the data.  There will also be a third database filled with preloaded data that contains a student roster, which will list names, student ID’s and if the required courses have been met for each student; this will be the test data.   Two classes will be constructed, Faculty and Student.  The Faculty class will have the following data members: name, quarter, year, senior_project_area, student_defined_project.  Student_defined_project is a boolean data type that will indicate whether the faculty member accepts student defined senior projects.  The Student class will have the following data members: name, bronco_ID, quarter, year, major and adviser.  The student GUI will be linked to the faculty database so that the database will be read and partially displayed on the student GUI so the student/user can select an adviser.  Another optional class we can add is an Employer class, where an employer will be able to access the database and search for students based on their area of interest.
	
Certain features will be implemented in the project, such as a notice to a student/user who does not meet the pre-requisite/co-requisite of the Senior Project; this will be checked upon entering their Bronco ID.  Based on first come, first served, some advisers will become unavailable in the student GUI when they have been assigned to too many students.  A simple count will be utilized when an adviser is chosen to set a limit on the number of students each professor will be allowed to have.  The student GUI will also allow the student to choose their top three choices for adviser, and we will have algorithms set in place to display the optimal choice for the student.  Features may be added, enhanced or dropped as we progress.