#include "Main_Ui.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main() {
	//void main(array<String^> ^ args)
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TimeTableLinkerProject::Main_Ui form;
	Application::Run(% form);
	return 0;
}
