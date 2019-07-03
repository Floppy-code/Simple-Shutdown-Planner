#include "MainForm.h"
#include "Manager.h"

#include <Windows.h>

using namespace SimpleShutdownPlanner;

INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());

	return 0;
}