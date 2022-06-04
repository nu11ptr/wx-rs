#include "wx_app.h"

extern "C"
{
    wxAppVtable *create_wxApp_vtable()
    {
        return new wxAppVtable{nullptr};
    }

    void destroy_wxApp_vtable(wxAppVtable *vtable)
    {
        delete vtable;
    }

    wxAppSubclass *create_wxApp_subclass(wxAppVtable *vtable)
    {
        return new wxAppSubclass(vtable);
    }

    void destroy_wxApp_subclass(wxAppSubclass *subclass)
    {
        delete subclass;
    }

    bool wxApp_subclass_OnInit(wxAppSubclass *subclass)
    {
        return subclass->OnInit();
    }

    void wxApp_subclass_SetTopWindow(wxAppSubclass *subclass, wxWindow *window)
    {
        subclass->SetTopWindow(window);
    }

    void wxApp_SetInitializerFunction(wxAppInitializerFunction fn)
    {
        wxApp::SetInitializerFunction(fn);
    }
}