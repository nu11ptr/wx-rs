#include "wx_app.h"

extern "C"
{
    wxAppVtable *create_wx_app_vtable()
    {
        return new wxAppVtable{nullptr};
    }

    void delete_wx_app_vtable(wxAppVtable *vtable)
    {
        delete vtable;
    }

    wxAppSubclass *create_wx_app_subclass(wxAppVtable *vtable)
    {
        return new wxAppSubclass(vtable);
    }

    void delete_wx_app_subclass(wxAppSubclass *subclass)
    {
        delete subclass;
    }
}