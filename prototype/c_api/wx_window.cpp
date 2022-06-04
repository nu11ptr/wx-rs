#include "wx_window.h"

extern "C"
{
    wxWindow *create_wxWindow()
    {
        return new wxWindow();
    }

    void destroy_wxWindow(wxWindow *window)
    {
        delete window;
    }
}