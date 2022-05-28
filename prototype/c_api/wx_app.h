#ifndef __WX_APP_H__
#define __WX_APP_H__

// *** Vtable ***

#ifdef __cplusplus
extern "C"
{
#else  // !__cpluplus
typedef unsigned char bool;
#endif // __cplusplus

    typedef struct wxAppVtable
    {
        bool (*on_init)();
    } wxAppVtable;

    wxAppVtable *create_wx_app_vtable();

    void delete_wx_app_vtable(wxAppVtable *vtable);

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
#else  // !__cpluplus
typedef struct wxAppSubclass
{
    wxAppVtable *vtable;
} wxAppSubclass;
#endif // __cplusplus

    wxAppSubclass *create_wx_app_subclass(wxAppVtable *vtable);

    void delete_wx_app_subclass(wxAppSubclass *subclass);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__WX_APP_H__