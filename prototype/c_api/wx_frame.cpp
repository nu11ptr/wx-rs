#include "wx_frame.h"

extern "C"
{
    wxFrame *create_wx_frame()
    {
        return new wxFrame();
    }

    void delete_wx_frame(wxFrame *frame)
    {
        delete frame;
    }
}