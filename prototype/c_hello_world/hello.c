#include <stdio.h>

#include "hello.h"

bool on_init(wxAppSubclass *app)
{
    wxString *hello = create_wx_string2("Hello wxWidgets World");
    wxFrame *frame = create_wx_frame2(NULL, -1, hello);
    delete_wx_string(hello);

    wx_frame_create_status_bar(frame);

    wxString *hello_world = create_wx_string2("Hello world");
    wx_frame_set_status_text(frame, hello_world);
    delete_wx_string(hello_world);

    wx_frame_show(frame, true);
    wx_app_subclass_set_top_window(app, (wxWindow *)frame);
    return true;
}

wxAppSubclass *create_app()
{
    wxAppVtable *vtable = create_wx_app_vtable();
    vtable->on_init = on_init;

    return create_wx_app_subclass(vtable);
}

int main(int argc, char **argv)
{
    wx_app_set_initializer_function((wxAppInitializerFunction)create_app);

    int ret_code = wx_entry(argc, argv);

    // TODO: How to delete vtable?
    // I suspect app itself is freed by wxwidgets?

    return ret_code;
}
