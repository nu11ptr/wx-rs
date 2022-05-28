#include "wx_window.h"

extern "C"
{
    wxWindow *create_wx_window()
    {
        return new wxWindow();
    }

    void delete_wx_window(wxWindow *window)
    {
        delete window;
    }
}