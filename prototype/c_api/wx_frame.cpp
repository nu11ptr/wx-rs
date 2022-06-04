#include "wx_frame.h"

extern "C"
{
    wxFrame *create_wxFrame()
    {
        return new wxFrame();
    }

    wxFrame *create_wxFrame2(wxWindow *window, wxWindowID id, const wxString *title)
    {
        return new wxFrame(window, id, *title);
    }

    void destroy_wxFrame(const wxFrame *frame)
    {
        delete frame;
    }

    wxStatusBar *wxFrame_CreateStatusBar(wxFrame *frame)
    {
        return frame->CreateStatusBar();
    }

    void wxFrame_SetStatusText(wxFrame *frame, const wxString *str)
    {
        frame->SetStatusText(*str);
    }

    bool wxFrame_Show(wxFrame *frame, bool show)
    {
        return frame->Show(show);
    }
}