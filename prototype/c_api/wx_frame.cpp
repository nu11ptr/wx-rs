#include "wx_frame.h"

extern "C"
{
    wxFrame *create_wx_frame()
    {
        return new wxFrame();
    }

    wxFrame *create_wx_frame2(wxWindow *window, wxWindowID id, wxString *title)
    {
        return new wxFrame(window, id, *title);
    }

    void delete_wx_frame(wxFrame *frame)
    {
        delete frame;
    }

    wxStatusBar *wx_frame_create_status_bar(wxFrame *frame)
    {
        return frame->CreateStatusBar();
    }

    void wx_frame_set_status_text(wxFrame *frame, wxString *str)
    {
        frame->SetStatusText(*str);
    }

    bool wx_frame_show(wxFrame *frame, bool show)
    {
        return frame->Show(show);
    }
}