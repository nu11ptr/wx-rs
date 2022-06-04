#[repr(C)]
pub struct wxWindow {
    unused: [u8; 0],
}

extern "C" {
    pub fn create_wxWindow() -> *mut wxWindow;

    pub fn destroy_wxWindow(window: *const wxWindow);
}
