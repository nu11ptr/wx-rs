#include "wx_string.h"

extern "C"
{
    wxString create_wx_string()
    {
        return wxString();
    }

    wxString create_wx_string2(const char *str)
    {
        return wxString(str);
    }
}