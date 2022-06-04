#ifndef __WX_APP_H__
#define __WX_APP_H__

// *** Vtable ***

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    typedef struct wxAppVtable
    {
        bool (*on_init)();
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

public:
    explicit wxAppSubclass(wxAppVtable *vtable) : vtable{vtable} {}

    virtual bool OnInit()
    {
        if (vtable->on_init != nullptr)
        {
            return (*vtable->on_init)();
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
} wxAppSubclass;
#endif // __cplusplus

    wxAppSubclass *create_wxApp_subclass(wxAppVtable *vtable);

    void destroy_wxApp_subclass(wxAppSubclass *subclass);

    bool wxApp_subclass_OnInit(wxAppSubclass *subclass);

    void wxApp_subclass_SetTopWindow(wxAppSubclass *subclass, wxWindow *window);

    void wxApp_SetInitializerFunction(wxAppInitializerFunction fn);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_APP_H__
