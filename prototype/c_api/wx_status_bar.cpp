#include "wx_status_bar.h"

extern "C"
{
    wxStatusBar *create_wx_status_bar()
    {
        return new wxStatusBar();
    }

    void delete_wx_status_bar(wxStatusBar *status_bar)
    {
        delete status_bar;
    }
}