#ifndef __WX_WINDOW_H__
#define __WX_WINDOW_H__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else // !__cpluplus
#include "wx.h"

typedef struct wxWindow
{
} wxWindow;
#endif // __cplusplus

    wxWindow *create_wxWindow();

    void destroy_wxWindow(wxWindow *window);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_WINDOW_H__
