#ifndef __WX_STRING_H__
#define __WX_STRING_H__

#ifdef __cplusplus

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else // !__cpluplus
#include "wx.h"

typedef struct wxString wxString;
#endif // __cplusplus

    wxString *create_wxString();

    wxString *create_wxString2(const char *str);

    void destroy_wxString(const wxString *str);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_STRING_H__
