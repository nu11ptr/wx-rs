#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#ifdef __cplusplus
#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

extern "C"
{
#else // !__cplusplus
#include "types.h"
#endif // __cplusplus

    int wx_entry(int &argc, wxChar **argv);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__FUNCTIONS_H__
