#include "MainForm.h"
#include "Windows.h"

using namespace MyFilter;

[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}