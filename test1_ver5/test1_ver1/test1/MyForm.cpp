#include "Myform.h"

using namespace System;
using namespace System::Windows::Forms;
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	test1::MyForm form;
	Application::Run(% form);
}

