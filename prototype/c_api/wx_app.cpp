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

    bool wx_app_subclass_on_init(wxAppSubclass *subclass)
    {
        return subclass->OnInit();
    }

    void wx_app_subclass_set_top_window(wxAppSubclass *subclass, wxWindow *window)
    {
        subclass->SetTopWindow(window);
    }

    void wx_app_set_initializer_function(wxAppInitializerFunction fn)
    {
        wxApp::SetInitializerFunction(fn);
    }
}