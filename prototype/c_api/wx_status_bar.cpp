#include "wx_status_bar.h"

extern "C"
{
    wxStatusBar *create_wxStatusBar()
    {
        return new wxStatusBar();
    }

    void destroy_wxStatusBar(const wxStatusBar *status_bar)
    {
        delete status_bar;
    }
}