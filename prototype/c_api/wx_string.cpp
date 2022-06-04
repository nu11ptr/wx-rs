#include "wx_string.h"

extern "C"
{
    wxString *create_wx_string()
    {
        return new wxString();
    }

    wxString *create_wx_string2(const char *str)
    {
        return new wxString(str);
    }

    void delete_wx_string(wxString *str)
    {
        delete str;
    }
}