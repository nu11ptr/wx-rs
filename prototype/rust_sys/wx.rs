/* automatically generated by rust-bindgen 0.59.2 */

pub const true_: u32 = 1;
pub const false_: u32 = 0;
pub type bool_ = ::std::os::raw::c_uchar;
pub type wxWindowID = ::std::os::raw::c_int;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct wxString {
    _unused: [u8; 0],
}
pub type size_t = ::std::os::raw::c_ulong;
pub type wchar_t = ::std::os::raw::c_int;
#[repr(C)]
#[repr(align(16))]
#[derive(Debug, Copy, Clone)]
pub struct max_align_t {
    pub __clang_max_align_nonce1: ::std::os::raw::c_longlong,
    pub __bindgen_padding_0: u64,
    pub __clang_max_align_nonce2: u128,
}
#[test]
fn bindgen_test_layout_max_align_t() {
    assert_eq!(
        ::std::mem::size_of::<max_align_t>(),
        32usize,
        concat!("Size of: ", stringify!(max_align_t))
    );
    assert_eq!(
        ::std::mem::align_of::<max_align_t>(),
        16usize,
        concat!("Alignment of ", stringify!(max_align_t))
    );
    assert_eq!(
        unsafe {
            &(*(::std::ptr::null::<max_align_t>())).__clang_max_align_nonce1 as *const _ as usize
        },
        0usize,
        concat!(
            "Offset of field: ",
            stringify!(max_align_t),
            "::",
            stringify!(__clang_max_align_nonce1)
        )
    );
    assert_eq!(
        unsafe {
            &(*(::std::ptr::null::<max_align_t>())).__clang_max_align_nonce2 as *const _ as usize
        },
        16usize,
        concat!(
            "Offset of field: ",
            stringify!(max_align_t),
            "::",
            stringify!(__clang_max_align_nonce2)
        )
    );
}
extern "C" {
    pub fn create_wxString() -> *mut wxString;
}
extern "C" {
    pub fn create_wxString2(str_: *const ::std::os::raw::c_char) -> *mut wxString;
}
extern "C" {
    pub fn create_wxString3(str_: *const ::std::os::raw::c_char, len: size_t) -> *mut wxString;
}
extern "C" {
    pub fn destroy_wxString(str_: *const wxString);
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct wxWindow {}
#[test]
fn bindgen_test_layout_wxWindow() {
    assert_eq!(
        ::std::mem::size_of::<wxWindow>(),
        0usize,
        concat!("Size of: ", stringify!(wxWindow))
    );
    assert_eq!(
        ::std::mem::align_of::<wxWindow>(),
        1usize,
        concat!("Alignment of ", stringify!(wxWindow))
    );
}
extern "C" {
    pub fn create_wxWindow() -> *mut wxWindow;
}
extern "C" {
    pub fn destroy_wxWindow(window: *const wxWindow);
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct wxAppVtable {
    pub on_init: ::std::option::Option<
        unsafe extern "C" fn(arg1: *mut wxAppSubclass, arg2: *mut ::std::os::raw::c_void) -> bool_,
    >,
}
#[test]
fn bindgen_test_layout_wxAppVtable() {
    assert_eq!(
        ::std::mem::size_of::<wxAppVtable>(),
        8usize,
        concat!("Size of: ", stringify!(wxAppVtable))
    );
    assert_eq!(
        ::std::mem::align_of::<wxAppVtable>(),
        8usize,
        concat!("Alignment of ", stringify!(wxAppVtable))
    );
    assert_eq!(
        unsafe { &(*(::std::ptr::null::<wxAppVtable>())).on_init as *const _ as usize },
        0usize,
        concat!(
            "Offset of field: ",
            stringify!(wxAppVtable),
            "::",
            stringify!(on_init)
        )
    );
}
extern "C" {
    pub fn create_wxApp_vtable() -> *mut wxAppVtable;
}
extern "C" {
    pub fn destroy_wxApp_vtable(vtable: *mut wxAppVtable);
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct _wxAppConsole {
    _unused: [u8; 0],
}
pub type wxAppConsole = _wxAppConsole;
pub type wxAppInitializerFunction =
    ::std::option::Option<unsafe extern "C" fn() -> *mut wxAppConsole>;
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct wxAppSubclass {
    pub vtable: *mut wxAppVtable,
    pub meta: *mut ::std::os::raw::c_void,
}
#[test]
fn bindgen_test_layout_wxAppSubclass() {
    assert_eq!(
        ::std::mem::size_of::<wxAppSubclass>(),
        16usize,
        concat!("Size of: ", stringify!(wxAppSubclass))
    );
    assert_eq!(
        ::std::mem::align_of::<wxAppSubclass>(),
        8usize,
        concat!("Alignment of ", stringify!(wxAppSubclass))
    );
    assert_eq!(
        unsafe { &(*(::std::ptr::null::<wxAppSubclass>())).vtable as *const _ as usize },
        0usize,
        concat!(
            "Offset of field: ",
            stringify!(wxAppSubclass),
            "::",
            stringify!(vtable)
        )
    );
    assert_eq!(
        unsafe { &(*(::std::ptr::null::<wxAppSubclass>())).meta as *const _ as usize },
        8usize,
        concat!(
            "Offset of field: ",
            stringify!(wxAppSubclass),
            "::",
            stringify!(meta)
        )
    );
}
extern "C" {
    pub fn create_wxApp_subclass(
        vtable: *mut wxAppVtable,
        meta: *mut ::std::os::raw::c_void,
    ) -> *mut wxAppSubclass;
}
extern "C" {
    pub fn destroy_wxApp_subclass(subclass: *const wxAppSubclass);
}
extern "C" {
    pub fn wxApp_subclass_OnInit(subclass: *mut wxAppSubclass) -> bool_;
}
extern "C" {
    pub fn wxApp_subclass_SetTopWindow(subclass: *mut wxAppSubclass, window: *mut wxWindow);
}
extern "C" {
    pub fn wxApp_SetInitializerFunction(fn_: wxAppInitializerFunction);
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct wxStatusBar {}
#[test]
fn bindgen_test_layout_wxStatusBar() {
    assert_eq!(
        ::std::mem::size_of::<wxStatusBar>(),
        0usize,
        concat!("Size of: ", stringify!(wxStatusBar))
    );
    assert_eq!(
        ::std::mem::align_of::<wxStatusBar>(),
        1usize,
        concat!("Alignment of ", stringify!(wxStatusBar))
    );
}
extern "C" {
    pub fn create_wxStatusBar() -> *mut wxStatusBar;
}
extern "C" {
    pub fn destroy_wxStatusBar(status_bar: *const wxStatusBar);
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct wxFrame {}
#[test]
fn bindgen_test_layout_wxFrame() {
    assert_eq!(
        ::std::mem::size_of::<wxFrame>(),
        0usize,
        concat!("Size of: ", stringify!(wxFrame))
    );
    assert_eq!(
        ::std::mem::align_of::<wxFrame>(),
        1usize,
        concat!("Alignment of ", stringify!(wxFrame))
    );
}
extern "C" {
    pub fn create_wxFrame() -> *mut wxFrame;
}
extern "C" {
    pub fn create_wxFrame2(
        window: *mut wxWindow,
        id: wxWindowID,
        title: *const wxString,
    ) -> *mut wxFrame;
}
extern "C" {
    pub fn destroy_wxFrame(frame: *const wxFrame);
}
extern "C" {
    pub fn wxFrame_CreateStatusBar(frame: *mut wxFrame) -> *mut wxStatusBar;
}
extern "C" {
    pub fn wxFrame_SetStatusText(frame: *mut wxFrame, str_: *const wxString);
}
extern "C" {
    pub fn wxFrame_Show(frame: *mut wxFrame, show: bool_) -> bool_;
}
extern "C" {
    pub fn global_wxEntry(
        argc: ::std::os::raw::c_int,
        argv: *mut *mut ::std::os::raw::c_char,
    ) -> ::std::os::raw::c_int;
}