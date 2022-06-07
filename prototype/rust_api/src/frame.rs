use std::{mem, ptr};

use crate::{IsWindow, StatusBar, Window};

pub struct Frame(*mut wx::wxFrame);

impl Frame {
    /// # Safety
    ///
    /// Safe as long as called with a valid raw frame
    pub unsafe fn from_raw(frame: *mut wx::wxFrame) -> Self {
        Self(frame)
    }

    pub fn new() -> Self {
        Self(unsafe { wx::create_wxFrame() })
    }

    pub fn from_args(window: Option<&Window>, id: wx::wxWindowID, title: &str) -> Self {
        let window = match window {
            Some(window) => window.0,
            None => ptr::null::<wx::wxWindow>() as *mut _,
        };

        unsafe {
            let title = wx::create_wxString3(
                title.as_ptr() as *const std::os::raw::c_char,
                title.len() as wx::size_t,
            );
            let frame = wx::create_wxFrame2(window, id, title);
            wx::destroy_wxString(title);
            Self(frame)
        }
    }

    pub fn create_status_bar(&self) -> StatusBar {
        unsafe {
            let raw = wx::wxFrame_CreateStatusBar(self.0);
            StatusBar::from_raw(raw)
        }
    }

    pub fn set_status_text(&self, s: &str) {
        unsafe {
            let s = wx::create_wxString3(
                s.as_ptr() as *const std::os::raw::c_char,
                s.len() as wx::size_t,
            );
            wx::wxFrame_SetStatusText(self.0, s);
            wx::destroy_wxString(s);
        }
    }

    pub fn show(&self, show: bool) -> bool {
        unsafe { wx::wxFrame_Show(self.0, mem::transmute(show)) != 0 }
    }
}

impl Default for Frame {
    fn default() -> Self {
        Self::new()
    }
}

impl Drop for Frame {
    fn drop(&mut self) {
        // TODO: What to release? If anything?
    }
}

impl IsWindow for Frame {
    fn raw_window(&self) -> *mut wx::wxWindow {
        self.0 as *mut wx::wxWindow
    }
}
