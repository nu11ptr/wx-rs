#ifndef __WX_APP_H__
#define __WX_APP_H__

// *** Vtable ***

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    // Forward declare
    typedef struct wxAppSubclass wxAppSubclass;

    typedef struct wxAppVtable
    {
        bool (*on_init)(wxAppSubclass *, void *);
    } wxAppVtable;

    wxAppVtable *create_wxApp_vtable();

    void destroy_wxApp_vtable(wxAppVtable *vtable);

#ifdef __cplusplus
}

// *** Subclass ***

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif // WX_PRECOMP

class wxAppSubclass : public wxApp
{
private:
    wxAppVtable *vtable;
    void *meta;

public:
    explicit wxAppSubclass(wxAppVtable *vtable, void *meta) : vtable{vtable}, meta{meta} {}

    virtual bool OnInit()
    {
        if (vtable->on_init != nullptr)
        {
            return (*vtable->on_init)(this, meta);
        }
        else
        {
            return this->OnInit();
        }
    }
};

extern "C"
{
#else // !__cpluplus
#include "wx.h"

typedef struct _wxAppConsole wxAppConsole;

typedef wxAppConsole *(*wxAppInitializerFunction)();

typedef struct wxAppSubclass
{
    wxAppVtable *vtable;
    void *meta;
} wxAppSubclass;
#endif // __cplusplus

    wxAppSubclass *create_wxApp_subclass(wxAppVtable *vtable, void *meta);

    void destroy_wxApp_subclass(const wxAppSubclass *subclass);

    bool wxApp_subclass_OnInit(wxAppSubclass *subclass);

    void wxApp_subclass_SetTopWindow(wxAppSubclass *subclass, wxWindow *window);

    void wxApp_SetInitializerFunction(wxAppInitializerFunction fn);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_APP_H__
