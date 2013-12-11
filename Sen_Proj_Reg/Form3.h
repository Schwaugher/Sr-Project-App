#pragma once
#include <string>
#include <fstream>
#include "LogIn.h"
#include "Stu_Reg.h"
#include "Ad_Reg.h"
#include <msclr\marshal.h>

using namespace std;
using namespace msclr::interop;

namespace Sen_Proj_Reg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		marshal_context ^ context;
		const char* choice1;
		const char* choice2;
		const char* choice3;
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::GroupBox^  groupBox2;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Bronco ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(114, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(114, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Location = System::Drawing::Point(254, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 110);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Priority Choice";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Third Choice Advisor:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Second Choice Advisor:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"First Choice Advisor:";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(137, 72);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(137, 45);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(137, 18);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Academic Term:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 138);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(527, 147);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Advisors";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 20);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(514, 121);
			this->textBox1->TabIndex = 0;
			this->textBox1->WordWrap = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(366, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Log Out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(447, 297);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 331);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(554, 22);
			this->statusStrip1->TabIndex = 13;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(114, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"label9";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 36);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Check Eligibility";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 353);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Registration";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form3::Form3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				if(MessageBox::Show("Do you really want to exit?", 
				"Senior Project Registration", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					Application::Exit();
				}	
			 }
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
				string Full;
				LogIn User; //Object of LogIn class
				Full = User.GetFirst() + " " + User.GetLast();
				String^ FullName = gcnew String(Full.c_str());//Convert std::string to System::String
				String^ BID = gcnew String(User.GetID().c_str());
				label3->Text = FullName;
				label4->Text = BID;
				label9->Text = "FALL 2013"; //Current term open for registration
				string bn, f, l, sd, ns, p;
				fstream projectslist("faculty_projects.txt");
				Ad_Reg proj;
				while (projectslist >> bn >> f >> l >> sd >> ns >> p)
				{
					String^ first = gcnew String(f.c_str());
					String^ last = gcnew String(l.c_str());
					sd = (sd == "1" ? "yes" : "no");
					String^ stu_def = gcnew String(sd.c_str());
					String^ nbrStu = gcnew String(ns.c_str());
					p = proj.under2space(p);
					String^ projects = gcnew String(p.c_str());
					comboBox2->Items->Add(last);
					comboBox3->Items->Add(last);
					comboBox4->Items->Add(last);
					textBox1->AppendText(last+","+first+"    Student Defined Proj.:"+stu_def+"    Avl. Seats:"+nbrStu+"    Proj. Areas:"+projects+"\n");
				}
				
		 }
private: System::Void Form3_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			LogIn User;
			if(User.Chk_Req())
			{
				MessageBox::Show("All Senior Project Requirements Met.");
			}
			else
			{
				MessageBox::Show("Requirements not met! You must fulfill requirements to register.");
			}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 context = gcnew marshal_context();
			 Stu_Reg newstudent;
			 if(this->comboBox2->Text == "" && this->comboBox3->Text == "" && this->comboBox4->Text == "")
			 {
				this->toolStripStatusLabel1->ForeColor = Color::Red;
				this->toolStripStatusLabel1->Text = "Please make a choice!";
			 }
			 else if(this->comboBox2->Text == "")
			 {
				this->toolStripStatusLabel1->ForeColor = Color::Red;
				this->toolStripStatusLabel1->Text = "Please make a 1st choice!";
			 }
			 else if(this->comboBox4->Text != "" && this->comboBox3->Text == "")
			 {
				this->toolStripStatusLabel1->ForeColor = Color::Red;
				this->toolStripStatusLabel1->Text = "Please make a 2nd choice!";
			 }
			 else 
			 {
				LogIn User;
				if(User.Chk_Req())
				{
					this->toolStripStatusLabel1->Text = " ";
					choice1 = context->marshal_as<const char*>(this->comboBox2->Text->ToString());
					//MessageBox::Show("choice1 entered");
					if(this->comboBox3->Text != "")
						choice2 = context->marshal_as<const char*>(this->comboBox3->Text->ToString());
						//MessageBox::Show("choice2 entered");}
					else
						choice2 = "NA";
					if(this->comboBox4->Text != "")
						choice3 = context->marshal_as<const char*>(this->comboBox4->Text->ToString());
						//MessageBox::Show("choice3 entered");}
					else
						choice3 = "NA";
					string advisor = newstudent.Fifo(choice1, choice2, choice3);
					if(advisor == "NA")
						MessageBox::Show("All chosen advisors chosen are full. Please choose again");
					else
					{
						newstudent.Write(advisor);
						string mess = "You have successfully registered for Senior Project with " + advisor + ".";
						String^ message = gcnew String(mess.c_str());//Convert std::string to System::String
						MessageBox::Show(message);
						Application::Exit();
					}
				}
				else
					MessageBox::Show("Please fulfill requirements before registering.");
			 }
		 }
};
}
