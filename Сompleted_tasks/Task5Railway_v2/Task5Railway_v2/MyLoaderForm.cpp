#include "MyLoaderForm.h"
//#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Task5Railwayv2::MyLoaderForm loader;
	//Task5Railwayv2::MyForm form;
	Application::Run(% loader);
}