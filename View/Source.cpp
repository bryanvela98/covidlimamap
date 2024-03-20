#include "LOGIN.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace View;

void Source(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LOGIN ventana;
	Application::Run(% ventana);
}