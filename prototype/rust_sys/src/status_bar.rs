#[repr(C)]
pub struct wxStatusBar {
    unused: [u8; 0],
}

extern "C" {
    pub fn create_wxStatusBar() -> *mut wxStatusBar;

    pub fn destroy_wxStatusBar(status_bar: *const wxStatusBar);
}
