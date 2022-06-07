use crate::size_t;

#[repr(C)]
pub struct wxString {
    unused: [u8; 0],
}

extern "C" {
    pub fn create_wxString() -> *mut wxString;

    pub fn create_wxString2(str_: *const std::os::raw::c_char) -> *mut wxString;

    pub fn create_wxString3(str_: *const std::os::raw::c_char, len: size_t) -> *mut wxString;

    pub fn destroy_wxString(str_: *const wxString);
}
