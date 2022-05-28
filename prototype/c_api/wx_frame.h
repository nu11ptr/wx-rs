#ifndef __WX_FRAME_H__
#define __WX_FRAME_H__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else  // !__cpluplus
typedef struct wxFrame
{
} wxFrame;
#endif // __cplusplus

    wxFrame *create_wx_frame();

    void delete_wx_frame(wxFrame *frame);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_FRAME_H__
