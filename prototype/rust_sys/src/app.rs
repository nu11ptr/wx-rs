use crate::{bool_, wxWindow};

#[repr(C)]
pub struct wxAppVtable {
    pub on_init: Option<
        unsafe extern "C" fn(arg1: *mut wxAppSubclass, arg2: *mut std::os::raw::c_void) -> bool_,
    >,
}

extern "C" {
    pub fn create_wxApp_vtable() -> *mut wxAppVtable;

    pub fn destroy_wxApp_vtable(vtable: *mut wxAppVtable);
}

#[repr(C)]
pub struct wxAppConsole {
    unused: [u8; 0],
}

#[allow(non_camel_case_types)]
pub type wxAppInitializerFunction = Option<unsafe extern "C" fn() -> *mut wxAppConsole>;

// *** wxAppSubclass ***

#[repr(C)]
pub struct wxAppSubclass {
    pub vtable: *mut wxAppVtable,
    pub meta: *mut std::os::raw::c_void,
}

extern "C" {
    pub fn create_wxApp_subclass(
        vtable: *mut wxAppVtable,
        meta: *mut std::os::raw::c_void,
    ) -> *mut wxAppSubclass;

    pub fn destroy_wxApp_subclass(subclass: *const wxAppSubclass);

    pub fn wxApp_subclass_OnInit(subclass: *mut wxAppSubclass) -> bool_;

    pub fn wxApp_subclass_SetTopWindow(subclass: *mut wxAppSubclass, window: *mut wxWindow);

    pub fn wxApp_SetInitializerFunction(fn_: wxAppInitializerFunction);

    pub fn wxApp_SetInstance(subclass: *mut wxAppSubclass);
}
