#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"
#include "Form2.h"
#include "Form00.h"
#include "Form3.h"


using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form00());
  //Application::Run(gcnew CppCLRWinFormsProject::Form2());
  return 0;
}