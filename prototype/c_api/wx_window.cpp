#include "wx_window.h"

extern "C"
{
    wxWindow *create_wxWindow()
    {
        return new wxWindow();
    }

    void destroy_wxWindow(const wxWindow *window)
    {
        delete window;
    }
}