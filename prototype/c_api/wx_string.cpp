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

    wxString *create_wxString3(const char *str, size_t len)
    {
        return new wxString(str, len);
    }

    void destroy_wxString(const wxString *str)
    {
        delete str;
    }
}