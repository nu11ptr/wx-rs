use crate::{bool_, wxStatusBar, wxString, wxWindow, wxWindowID};

#[repr(C)]
pub struct wxFrame {
    unused: [u8; 0],
}

extern "C" {
    pub fn create_wxFrame() -> *mut wxFrame;

    pub fn create_wxFrame2(
        window: *mut wxWindow,
        id: wxWindowID,
        title: *const wxString,
    ) -> *mut wxFrame;

    pub fn destroy_wxFrame(frame: *const wxFrame);

    pub fn wxFrame_CreateStatusBar(frame: *mut wxFrame) -> *mut wxStatusBar;

    pub fn wxFrame_SetStatusText(frame: *mut wxFrame, str_: *const wxString);

    pub fn wxFrame_Show(frame: *mut wxFrame, show: bool_) -> bool_;
}
