#include "wx_string.h"

extern "C"
{
    wxString *create_wxString()
    {
        return new wxString();
    }

    wxString *create_wxString2(const char *str)
    {
        return new wxString(str);
    }

    void destroy_wxString(const wxString *str)
    {
        delete str;
    }
}