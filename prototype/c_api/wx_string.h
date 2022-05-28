#ifndef __WX_STRING_H__
#define __WX_STRING_H__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else  // !__cpluplus
typedef struct wxString
{
} wxString;
#endif // __cplusplus

    wxString create_wx_string();

    wxString create_wx_string2(const char *str);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_STRING_H__
