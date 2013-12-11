#pragma once
#include <fstream>
#include <string>
#include "LogIn.h"

namespace Sen_Proj_Reg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(277, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Print";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(496, 196);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 248);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration Info";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form4::Form4_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				if(MessageBox::Show("Do you really want to exit?", 
				"Senior Project Registration", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
					Application::Exit();
				}
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Printer is down..");
			 }
	private: System::Void Form4_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
				LogIn User;
				if(User.ChkFac())
				{
					String^ first = gcnew String(User.GetFirst().c_str());
					String^ last = gcnew String(User.GetLast().c_str());
					richTextBox1->AppendText(first+" "+last+"\n");
					richTextBox1->AppendText("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					richTextBox1->AppendText("Student Team for: Fall 2013\n");
					richTextBox1->AppendText("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					richTextBox1->AppendText("Name\t\t\tBroncoID\t\temail\n");
					string bn, bid, f, l, a;
					fstream student_roster("student_info.txt");
					while (student_roster >> bn >> bid >> f >> l >> a)
					{
						if(a == User.GetLast())
						{
							string em = bn+"@csupomona.edu";
							String^ email = gcnew String(em.c_str());
							String^ broncoid = gcnew String(bid.c_str());
							String^ sfirst = gcnew String(f.c_str());
							String^ slast = gcnew String(l.c_str());
							richTextBox1->AppendText(sfirst+" "+slast+"\t\t"+broncoid+"\t"+email+"\n");
						}
					}
				}
				else
				{
					string bn, bid, f, l, a, p;
					string alast, afirst;
					fstream student_roster("student_info.txt");
					while (student_roster >> bn >> bid >> f >> l >> a)
					{
						if(bn == User.GetUser())
						{
							alast = a;
						}
					}
					fstream faculty("faculty.txt");
					while (faculty >> bn >> p >> bid >> f >> l)
					{
						if(l == alast)
						{
							afirst = f;
						}
					}
					String^ first = gcnew String(User.GetFirst().c_str());
					String^ last = gcnew String(User.GetLast().c_str());
					String^ Afirst = gcnew String(afirst.c_str());
					String^ Alast = gcnew String(alast.c_str());
					richTextBox1->AppendText(first+" "+last+"\n");
					richTextBox1->AppendText("Advisor: "+Afirst + " " + Alast + "\n");
					richTextBox1->AppendText("Quarter: Fall 2013\n");
					richTextBox1->AppendText("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					richTextBox1->AppendText("Team Members\n");
					richTextBox1->AppendText("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					richTextBox1->AppendText("Name\t\t\temail\n");
					fstream student_team("student_info.txt");
					while (student_team >> bn >> bid >> f >> l >> a)
					{
						if(a == alast)
						{
							string em = bn+"@csupomona.edu";
							String^ email = gcnew String(em.c_str());
							String^ sfirst = gcnew String(f.c_str());
							String^ slast = gcnew String(l.c_str());
							richTextBox1->AppendText(sfirst+" "+slast+"\t\t"+email+"\n");
						}
					}
				}

			 }
};
}
