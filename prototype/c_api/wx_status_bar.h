#ifndef __WX_STATUS_BAR__
#define __WX_STATUS_BAR__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else // !__cpluplus
#include "wx.h"

typedef struct wxStatusBar
{
} wxStatusBar;
#endif // __cplusplus

    wxStatusBar *create_wxStatusBar();

    void destroy_wxStatusBar(const wxStatusBar *status_bar);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_STATUS_BAR__
