#include <stdio.h>

#include "hello.h"

bool on_init(wxAppSubclass *app, void *meta)
{
    wxString *hello = create_wxString2("Hello wxWidgets World");
    wxFrame *frame = create_wxFrame2(NULL, -1, hello);
    destroy_wxString(hello);

    wxFrame_CreateStatusBar(frame);

    wxString *hello_world = create_wxString2("Hello world");
    wxFrame_SetStatusText(frame, hello_world);
    destroy_wxString(hello_world);

    wxFrame_Show(frame, true);
    wxApp_subclass_SetTopWindow(app, (wxWindow *)frame);
    return true;
}

wxAppSubclass *create_app()
{
    wxAppVtable *vtable = create_wxApp_vtable();
    vtable->on_init = on_init;

    return create_wxApp_subclass(vtable, NULL);
}

int main(int argc, char **argv)
{
    // wxApp_SetInitializerFunction((wxAppInitializerFunction)create_app);
    wxApp_SetInstance(create_app());

    int ret_code = global_wxEntry(argc, argv);

    // TODO: How to delete vtable?
    // I suspect app itself is freed by wxwidgets?

    return ret_code;
}
