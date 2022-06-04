// For compilers that don't support precompilation, include "wx/wx.h"
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "hello.h"

// IMPLEMENT_APP(HelloWorldApp)
IMPLEMENT_APP_NO_MAIN(HelloWorldApp)

// This is executed upon startup, like 'main()' in non-wxWidgets programs.
bool HelloWorldApp::OnInit()
{
    wxFrame *frame = new wxFrame((wxFrame *)NULL, -1, _T("Hello wxWidgets World"));
    frame->CreateStatusBar();
    frame->SetStatusText(_T("Hello World"));
    frame->Show(true); // Implemented by wxWindow
    SetTopWindow(frame);
    return true;
}

int main(int argc, char **argv)
{
    wxDISABLE_DEBUG_SUPPORT();

    return wxEntry(argc, argv);
}

// IMPLEMENT_APP(HelloWorldApp) and IMPLEMENT_APP_NO_MAIN(HellowWorldApp)  expands to:

// HelloWorldApp &wxGetApp() { return *static_cast<HelloWorldApp *>(wxApp::GetInstance()); }

// wxAppConsole *wxCreateApp()
// {
//     wxAppConsole::CheckBuildOptions(WX_BUILD_OPTIONS_SIGNATURE,
//                                     "your program");
//     return new HelloWorldApp;
// }

// wxAppInitializer
//     wxTheAppInitializer((wxAppInitializerFunction)wxCreateApp)

// the IMPLEMENT_APP(HelloWorldApp) version also adds:

// int main(int argc, char **argv)
// {
//     wxDISABLE_DEBUG_SUPPORT();

//     return wxEntry(argc, argv);
// }