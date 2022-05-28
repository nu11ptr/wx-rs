#ifndef __WX_STATUS_BAR__
#define __WX_STATUS_BAR__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else  // !__cpluplus
typedef struct wxStatusBar
{
} wxStatusBar;
#endif // __cplusplus

    wxStatusBar *create_wx_status_bar();

    void delete_wx_status_bar(wxStatusBar *status_bar);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_STATUS_BAR__
