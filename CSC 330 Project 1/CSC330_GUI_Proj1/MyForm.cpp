#include "MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CSC330GUIProj1::MyForm1 form;
	//CSC330GUIProj1::MyForm form;
	Application::Run(%form);
}