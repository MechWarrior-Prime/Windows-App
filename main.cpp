//set the main window name here
#include "frmMain.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//name of project and main window
	WindowsApp::frmMain^ window1 = gcnew WindowsApp::frmMain;

	//start GUI
	Application::Run(window1);
}