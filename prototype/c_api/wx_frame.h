#ifndef __WX_FRAME_H__
#define __WX_FRAME_H__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else // !__cpluplus
#include "wx.h"

typedef struct wxFrame
{
} wxFrame;
#endif // __cplusplus

    wxFrame *create_wxFrame();

    wxFrame *create_wxFrame2(wxWindow *window, wxWindowID id, const wxString *title);

    void destroy_wxFrame(const wxFrame *frame);

    wxStatusBar *wxFrame_CreateStatusBar(wxFrame *frame);

    void wxFrame_SetStatusText(wxFrame *frame, const wxString *str);

    bool wxFrame_Show(wxFrame *frame, bool show);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_FRAME_H__
