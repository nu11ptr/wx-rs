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

    wxFrame *create_wx_frame();

    wxFrame *create_wx_frame2(wxWindow *window, wxWindowID id, wxString *title);

    void delete_wx_frame(wxFrame *frame);

    wxStatusBar *wx_frame_create_status_bar(wxFrame *frame);

    void wx_frame_set_status_text(wxFrame *frame, wxString *str);

    bool wx_frame_show(wxFrame *frame, bool show);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_FRAME_H__
