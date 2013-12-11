#include "Form1.h"
#include "Form2.h"
#include "Form3.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

	Sen_Proj_Reg::Form1 form;
    Application::Run(%form);
}